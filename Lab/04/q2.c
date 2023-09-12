/*
*Programmer:Ghulam Murtaza
*Date:12-9-23
*Description:This program prints a square of stars for n numbers.*/


//--Include Files--//
#include <stdio.h>

int main() {
	int n;
	int i = 0;
	int j;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (i < n) {
		j = 0;
		while (j < n) {
			printf("*");
			j = j + 1;
		}
		printf("\n");
		i = i +1;
	}
}//end main
