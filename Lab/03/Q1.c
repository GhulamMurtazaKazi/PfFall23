QUESTION#1Make a simple calculator which performs basic arithmetic operations of mathematics such as addition, subtraction, division and multiplication in C.
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
}
