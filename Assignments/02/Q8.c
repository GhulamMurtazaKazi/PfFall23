Question 08:
Multiplying the digits of an integer and continuing the process gives the surprising result that the sequence
of products always arrives at a single digit number. For example,
715 ---- 35 ---- 15 ---- 5
27 ---- 14 ---- 4
4000 ---- 0
9
The number of times products need to be calculated to reach a single digit is called the persistence number
of that integer. Thus, the persistence number of 715 is 3, the persistence number of 27 is 2, the persistence
number of 4000 is 1, and the persistence number of 9 is 0.
You are to write a program that will continually prompt the user to enter a positive integer until EOF has
been entered via the keyboard. For each number entered your program should output the persistence of
the number. Please note that the correct spelling of persistence is p-e-r-s-i-s-t-e-n-c-e. The word does not
contain the letter “a”.
#include<stdio.h>
int main () {
	int number,product=1,persistence=0;
	printf("enter a positive integer\n");
	while (scanf("%d",&number)!=EOF) {
		if  (number<10) {
		printf("the persistance of the number=%d\n",persistence);
		printf("enter a positive integer\n");
		continue;
	}
		while (1) {
			product=product*(number%10);
			number=number/10;
			if (number==0)  {
			number=product;
				++persistence;
					product=1;
			if (number/10==0) {
				break;
			}
		}
			}
			printf("the persistance of the number=%d\n",persistence);
			persistence=0;
				printf("enter a positive integer\n");
	}
	return 0;
}  
