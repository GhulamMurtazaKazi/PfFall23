/*
*Programmer:Ghulam Murtaza
*Date:12-9-23
*Description:This program prints a pyramid of stars for n numbers.*/


//--included files--//
#include<stdio.h>
int main () {
	int number,i=1,j=1;
	printf("enter a number:");
	scanf("%d",&number);
	while (j<=number) {
		while (i>0) {
			printf("*");
			--i;
		} 
		printf("\n");
		j++;
		i=j;
	}
return 0;
}
