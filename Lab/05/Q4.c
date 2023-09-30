Create a calculator asking for operator (+ or – or * or /) and 2 operands and perform calculation according to the user input using switch statement.
#include<stdio.h>
int main () {
	float a,b;
	printf("enter a and b\n");
	scanf("%f %f",&a,&b);
	char operator;
	printf("operator\n");
	scanf(" %c",&operator);
	switch (operator) {
		case '+':
			printf("the sum =%f",a+b);
			break;
			
			case '-':
				printf("the difference=%f",a-b);
				break;
				
				case '*':
					 printf("the product =%f",a*b);
					 break;
					
					case '/':
						printf("the ratio=%f",a/b);
						break;
	}
	return 0;
