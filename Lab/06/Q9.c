Write a C Program to find the minimum and maximum number in an array.

Input: {4,1,6,8,10,21,8,9,2,6}

Output:

Minimum Number = 1

Maximum Number = 21
#include<stdio.h>
int main () {
	float numbers[1000],minimum,maximum,size;
	int i=0;
	printf("enter the size of array\n");
	scanf("%f",&size);
	while (i<size) {
		printf("enter the number\n");
		scanf("%f",&numbers[i]);
		++i;
	}
	i=0;
	minimum=numbers[i];
	i=1;
	while (i<size) {
		if  (minimum<numbers[i]) {
			++i;
		}
		else {
			minimum=numbers[i];
			++i;
		}
		}
		printf("the minimum number is %.1f\n",minimum);
		i=0;
		maximum=numbers[i];
		i=1;
			while (i<size) {
		if  (maximum>numbers[i]) {
			++i;
		}
		else {
			maximum=numbers[i];
			++i;
		}
		}
		printf("the maximum number is %.1f",maximum);
	return 0;
}
