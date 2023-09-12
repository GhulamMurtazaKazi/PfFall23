/*
*Programmer:Ghulam Murtaza
*Date:12-9-23
*Description:This program prints a pyramid of stars for n numbers.*/


//--included files--//
#include <stdio.h>

int main() {
	int n, i, j; // row count for '*', counter for rows, counter for '*'
	i = 0, j = 0; // initialize i and j

	printf("Input any number 'n': ");
	scanf("%d", &n);

	while (i < n){
		
		// adding '*'
		j = 0;
		while (j <= i) {
			printf("*");
			j++;
		} 		
		printf("\n"); // starting new line
		i++;
	}

}// end main
