Write a C Program that takes any number from the user and identifies if the number is a
perfect number or not.
#include<stdio.h>
int main () {
	int number,i=1,sum=0;
	printf("enter the number\n");
	scanf("%d",&number);
	while (i<number) {
		if (number%i==0) {
			sum=sum+i;
		}
		++i;

	}
	if (sum==number) {
		printf("%d is a perfect number",number);
		} else {
			printf("%d isnot a perfect number",number);
			
		}
		return 0;
} 
