TASK 3:
Create a C program that dynamically allocates memory for a 2D array of integers. Write a function that accepts a pointer to a pointer to an integer and fills the 2D array with consecutive prime numbers.
  #include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool prime(int num);
int main(){
	int r, c, a = 2;
	printf("Enter Number Row, Column: ");
	scanf("%d %d", &r, &c);
	int **arr = (int **)malloc(sizeof(int *) * r + sizeof(int) * r * c);
	int *ptr = (int *)(arr + r);
	for (int i = 0; i < r; ++i)
	{
		arr[i] = (ptr + c * i);
	}
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			while(prime(a) == false){
				a++;
			}
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	free(arr);
}

bool prime(int num){
	if (num < 2)
		return false;
	for (int i = 2; i < num/2; ++i)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
