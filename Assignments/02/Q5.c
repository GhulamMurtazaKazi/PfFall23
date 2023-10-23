Question 05 
Ramanujan-Hardy Numbers 2-way are numbers that are the sum of two cubes two different ways.
Following are the first few Ramanujan-Hardy 2-way numbers:
1729, 4104, 13832, 20683, 32832, 39312, 40033, 46683, 64232, 65728, 110656, 110808, 134379,
149389, 165464, 171288, 195841, 216027, 216125, 262656, 314496, 320264, 327763, 373464, 402597,
439101, 443889, 513000, 513856, 515375, 525824, 558441, 593047, 684019, 704977
E.g., 1729 = 12^3 + 1^3 = 9^3 + 10^3.
A. Write a C program to find all Ramanujan-Hardy numbers less than n^3.
B. Draw a trace table on a paper for the input 1729
#include<stdio.h>
int main () {
	int a=1,b,c,d,n;
	printf("enter the number\n");
	scanf("%d",&n);
	while (a<n) {
		b=a;
		while (b<n) {
			c=a+1;
			while (c<n) { 
				d=c;
				while (d<n) {
					if (a!=c&&b!=c&&a!=d&&b!=d) {
					if (((a*a*a)+(b*b*b))==((c*c*c)+(d*d*d)))  {
						printf("%d^3+%d^3=%d^3+%d^3=%lld\n",a,b,c,d,((a*a*a)+(b*b*b)));
			}
			}
				++d;
				 }
				 ++c;
			}
			++b; 
		}
		++a;
	}
	return 0;
}
