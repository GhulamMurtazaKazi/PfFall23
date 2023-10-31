#include<stdio.h>
void swap(int*a,int*b) {
	int temp=*b;
	*b=*a;
	*a=temp;
}
/*we were not using pointers initially that's why the program was not producing the desired result.The copy of argument is passed to the 
function that's why any change in parameter doesnot affect argument*/ 	
int main () {
	int j=2,k=5;
	printf("j=%d,k=%d\n",j,k);
	swap(&j,&k);
		printf("j=%d,k=%d\n",j,k);
		return 0;
}

