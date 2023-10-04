Write a program in C to read n number of values in an array and display it in reverse 

order.

Input: {1,2,3,4,5,6,7,8,9}

Output: 9 8 7 6 5 4 3 2 1
#include<stdio.h>
int main () {
	float numbers[10000],temp;
	int i=0,size;
	printf("enter the size of array:");
	scanf("%d",&size);
	while (i<size) {
		printf("enter the number %d\n",i+1);
		scanf("%f",&numbers[i]);
		++i;
	} 
	i=0;
	while (i<size/2) {
		temp=numbers[i];
		numbers[i]=numbers[size-(i+1)];
		numbers[size-(i+1)]=temp;
		i++;
	}
	i=0;
	printf("{");
	while (i<size) {
		if (i==size-1) {
		printf("%f",numbers[i]);
	} else
	{ 
		printf("%f,",numbers[i]);
	}
		++i;
	}
	printf("}");
	return 0;
}
