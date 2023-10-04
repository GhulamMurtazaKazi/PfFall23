Write a C program that produces the following output:

0 0 0 0

  1 1

2 2 2 2

  3 3

4 4 4 4

  5 5

6 6 6 6

Note: Only use single loops (No Nested Loops)
#include<stdio.h>
int main () {
	int i=1;
while (i<=4) {
	printf("0\t");
	++i;
} 
printf("\n");
i=1;
while (i<=2) {
	printf("\t1");
	++i;
} 
i=1;
printf("\n");
while (i<=4) {
	printf("2\t");
	++i;
	
}
printf("\n");
i=1;
while (i<=2) {
	printf("\t3");
	++i;
}
i=1;
printf("\n");
while (i<=4) {
	printf("4\t");
	++i;
	
} 
printf("\n");
i=1;
while (i<=2) {
	printf("\t5");
	++i;
}
i=1;
printf("\n");
while (i<=4) {
	printf("6\t");
	++i;
	
} 
	return 0;
}
