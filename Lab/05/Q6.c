Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off.
  #include<stdio.h>
int main ()   {
	int number,bit_4,bit_7;
	printf("enter a 8 bit number");
	scanf("%d",&number);
	bit_7=number/1000000%10;
	bit_4=number/1000%10;
	if (bit_7==1) {
		number=number-1000000;
	} if (bit_4==1) {
		number=number-1000;
	} 
	printf("%d",number);
	return 0;
}

