An online shopping store is providing discounts on the items due to the Eid. If the cost of items is more than 1999 it will give a discount upto 50%. If the cost of shopping is 2000 to 4000, a 20% discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied. If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual amount, saved amount and the amount after discount.
  #include<stdio.h>
int main () {
	float actualamount,amountsaved,saleprice;
	printf("input the cost of items\n");
	scanf("%f",&actualamount);
	if (actualamount>=2000&&actualamount<=4000) {
		amountsaved=actualamount*0.2;
	} else if (actualamount>=4001&&actualamount<=6000)  {
		amountsaved=actualamount*0.3;
	} else { 
	amountsaved=actualamount*0.5;
	}
	saleprice=actualamount-amountsaved;
	printf("actualamount%f,amountsaved%f,saleprice%f",actualamount,amountsaved,saleprice);
	return 0;
	
}
