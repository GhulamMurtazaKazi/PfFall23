Write a C Program that takes any number from the user and identifies if the number is a
perfect number or not.
  #include<stdio.h>
int main () {
	int i=1,number;
	printf("enter a number\n");
	scanf("%d",&number);
	while (i<=number) {
	if 	(number%i==0) {
		if (i*i==number) {
			printf("this is a perfect square");
		return 0;
	}
		
	}
	++i;
		
	}
	printf("not a perfect square");
	
	return 0;
}
