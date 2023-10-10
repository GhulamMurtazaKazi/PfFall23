3. Take a number from user and count the sum of their digits.
Input: 206
Output: 8
Input: 4569
Output: 24
#include<stdio.h>
int main () {
	int number,sum=0;
	printf("enter the number\n");
	scanf("%d",&number);
	while (number>0) {
		sum=sum+number%10;
		number=number/10;
	}
	printf("the sum of the digits is:%d",sum);
	return  0;
}
