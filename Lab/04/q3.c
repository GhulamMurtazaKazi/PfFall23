/*
*Programmer:Ghulam Murtza
*Date:12-9-23
*Description:This program prints the sum of the squares of the given integers.*/


//--Include Files--//
#include<stdio.h>
int main () {
	float number,i,sum=0;
	printf("enter a number:");
	scanf("%f",&number);
    i=number;
    while (i>0) {
    	printf("enter a number\n");
    	scanf("%f",&number);
    	sum=sum+(number*number);
    	--i;
    	
	}
	printf("the sum of the squares of the numbers you entered is %f",sum);
return 0;
}
