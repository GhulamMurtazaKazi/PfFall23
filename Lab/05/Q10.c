 Write a program to receive an 8-bit number into a variable and then exchange its higher four bits with the lower four bits if the entered number includes at least two digits.
#include<stdio.h>
int main () {
	int number,ans=0,i=0,x=10000000;
	printf("enter a 8 bit number");
	scanf("%d",&number);
	if (number>=10) {
	while (i<8) {
		ans=(number%10)*x+ans;
		i++;
		x=x/10;
		number=number/10;
	}
	printf("%d",ans);
} 
	return 0;
	
}   
