Write a C Program to compute the LCM and GCD of two numbers.
  #include<stdio.h>
int main () {
	int  number_1,number_2,GCD,LCM;
	printf("enter 2 numbers\n");
	scanf("%d %d",&number_1,&number_2);
	if (number_1<number_2)
	{
		GCD=number_1;
		while (GCD>0) {
			if ((number_1%GCD==0)&&(number_2%GCD==0)) {
				printf("GCD=%d\n",GCD);
				break;
		}
			--GCD;
	}
	LCM=number_2;
	while (1) {
	if ((LCM%number_1==0)&&(LCM%number_2==0)) { 
		printf("LCM=%d",LCM);
		return 0;
	} 
	++LCM;
		} 
	}
	else {
	
		GCD=number_2;
		while (GCD>0) {
			if (number_1%GCD==0&&number_2%GCD==0) {
				printf("GCD=%d\n",GCD);
				break;
		}
			--GCD;
	}
	LCM=number_1;
	while (1) {
	if ((LCM%number_2==0)&&(LCM%number_1==0)) { 
		printf("LCM=%d",LCM);
		return 0;
	} 
	++LCM;
		}
		}
		
	return 0;
}
