10. Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-
array which adds to a given number S. In case of multiple subarrays, return the subarray which comes

first on moving from left to right.
Input:
Enter Number S = 12
Array: {1, 2, 3, 7, 5}
Output:
The Elements from Index 1 to 3 when summed results in the output of 12.
#include<stdio.h>
int main () {
	int array[1000],size,i=0,j,sum,number;
	printf("enter the number:");
	scanf("%d",&number);
	printf("enter the size of array\n");
	scanf("%d",&size);
	printf("enter the elements of the array\n");
	while (i<size) {
		scanf("%d",&array[i]);
		++i;
	}
	i=0;
	while (i<size)
	{
		j=i;
		sum=0;
		while (j<size) {
		sum=sum+array[j];
		if (sum==number) {
			printf("the elements  from index %d to %d when summed results in the output of %d",i,j,number);
			return 0;
		}
		++j;
	}
	++i;
	}
	printf("no any continuous sub-array is found whose elements when summed results in the %d",number);
	return 0;
}
