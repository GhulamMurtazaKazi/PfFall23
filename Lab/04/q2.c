/*
*Programmer:Ghulam Murtaza
*Date:12-9-23
*Description:This program prints a square of stars for n numbers.*/


//--Include Files--//
#include<stdio.h>
int main () {
	int number,i,j;
	printf("enter a number:");
	scanf("%d",&number);
	i=number,j=number;
	while (j>0) {
	while (i>0) {
		printf("*");
		--i;
	}
	printf("\n");
	--j;
	i=number;
}
return 0;
}
