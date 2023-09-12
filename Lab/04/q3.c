/*
*Programmer:Ghulam Murtza
*Date:12-9-23
*Description:This program prints the sum of the squares of the given integers.*/


//--Include Files--//
#include <stdio.h>
#include <math.h>

int main(){
int i=1;
int n;
int q;
float sqr;
float sum=0;
printf("enter number of integers");
scanf("%d", &q);
do{
i++;
printf("enter a number");
scanf("%d", &n);
sqr= n*n;
sum=sum +sqr;
}while(i<=q);
printf(" print sum %f", sum);

return 0;
}//end main
