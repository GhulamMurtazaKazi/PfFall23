1. Take Two numbers from user and divide both numbers but do not use the division operator.
#include<stdio.h>
int main () {
	int a,b,quotient=0,remainder;
	printf("enter the numerator and denominator\n");
	scanf("%d %d",&a,&b);
	remainder=a;
	if (b==0) {
	printf("undefined");
	return 0;
	} 
	while (a>0) {
		a=a-b;
		if (a>=0) {
			++quotient;
			remainder=a;
		}
		}
	printf("the remainder is %d\n",remainder);
		printf("the quotient is %d",quotient);
		return 0;
}
