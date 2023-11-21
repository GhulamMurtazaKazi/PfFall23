#include<stdio.h>
void swap(int a,int b) {
	int tmp=a;
	a=b;
	b=tmp;
	printf("j=%d,k=%d",a,b);
	/* as in the program given previously in the line 5
	the value of a was assigned to b but the value of a 
	in the line 4 was updated to the value of b thus there 
	is no change in the value of b.Instead tmp that is holding
	the initial value of a should be assigned to b in line 5.
	It will successfully swap both the values*/   
}
int main () {
	int j=2,k=5;
	printf("j=%d,k=%d\n",j,k);
	swap(j,k);
	return 0;
}
