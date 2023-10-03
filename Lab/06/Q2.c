Write a program that will generate the Fibonacci series up to 10000. Also find the sum of the
generated Fibonacci numbers divisible by 3, 5 or 7 only.
An example of the Fibonacci series is: 1 1 2 3 5 8 13 25..........
Note: Do this task by using a for loop DO NOT use arrays for this.
  include<stdio.h>
int main () {
	int i=1,j=1,next=2,sum=0;
	printf("%d",i);
	printf("  %d",j);
	for (;next<10000;) {
		printf("  %ld",next); 
		i=j;
		j=next;
		if ((next%3==0)||(next%7==0)||(next%5==0)) {
			sum=sum+next;
		}
			next=i+j;
		
	}
	printf("\n%d",sum);
	return 0;
}
