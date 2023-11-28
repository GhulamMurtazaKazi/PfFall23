TASK 5:
Read online about accurately timing a function in C lang (CPU time or real time). Then create 2 very large dynamic 2D arrays of size M x N. One 2D array will make several calls to malloc in a for loop. The other will make only 2 malloc calls: 1. directly allocate a M x N block, 2. allocate separate array of pointers of size M. Then for each pointer in the array point the pointer to  correct row.  Make a function that multiplies each element in a 2D array by 3 and then divide it by 2. Time the function for both the dynamic arrays. report the times for a 
a. 100 x 100
b. 500 x 500
c. 800 x 800 
sizes.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **create_arr_1(int M, int N)
{
	int **arr = (int **)malloc(sizeof(int *) * M);
	for (int i = 0; i < M; i++) arr[i] = (int *)malloc(sizeof(int) * N);

	return arr;
} // end create_arr_1()

int **create_arr_2(int M, int N)
{
	int *block = (int *)malloc(sizeof(int) * M * N);

	int **arr = (int **)malloc(sizeof(int *) * M);

	for (int i = 0, j = 0; i < M; i++, j += N) {
		// assigning pointer of each row start to arr pointer
		arr[i] = &block[j];
	}

	return arr;
} // end create_arr_2()

double time_arr(int **arr, int N, int M)
{
	clock_t time = clock();

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] *= 3;
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] /= 2;
		}
	}

	return (double) (clock() - time)/CLOCKS_PER_SEC;
} // end time_arr()

int main()
{
	int M, N;

	printf("Enter M: ");
	scanf("%d", &M);
	printf("Enter N: ");
	scanf("%d", &N);

	int **arr_1 = create_arr_1(M, N);
	int **arr_2 = create_arr_2(M, N);

	printf("Time for arr_1: %.fms\n", time_arr(arr_1, M, N) * 1000);
	printf("Time for arr_2: %.fms\n", time_arr(arr_2, M, N) * 1000);

	return 0;
} // end main()
