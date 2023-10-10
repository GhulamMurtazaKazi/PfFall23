8. Take an array with N elements as input, and sort the array into ascending order and then print the
sorted version.
Input: {6, 3, 2, 7, 1, 5}
Output: {1, 2, 3, 5, 6, 7}
#include<stdio.h>
int main () {
	int array[1000],i=0,j=1,x=0,temp,size;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	printf("enter the elements of array\n");
	while (i<size)
	{
		scanf("%d",&array[i]);
		++i;
	}
	i=0;
	while (x<size) {
		while (j<size) {
			if (array[i]<array[j]) {
				++j;
			} else {
				i=j;
				j=i+1;
			}
		}
			temp=array[x];
			array[x]=array[i];
			array[i]=temp;
			++x;
			i=x;
			j=i+1;
	}
	i=0;
	printf("the given array in ascending form is:\n");
	while (i<size) {
		printf("%d\n",array[i]);
		++i;
	}
	return 0;
}
  
