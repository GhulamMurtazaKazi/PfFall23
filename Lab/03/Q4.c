QUESTION#4
A Fat Brain pipsquigz is on sale for 20% off the original price. The original price is Rs. 1500. calculate and print the sale price in C.
#include<stdio.h>
int main () {
	float discount=20,original_price=1500,SP;
	printf("discount on the pipsquiz is 20 \n");
	printf("the original price  is R.S 1500\n");
	SP=original_price-(original_price*0.20);
	printf("the sales price of the fat brain pipsquiz is %f R.S",SP);
	return  0;
}  
