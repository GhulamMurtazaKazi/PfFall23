Question 09
Given a number N (take input from command line) create two NxN 2D Arrays and fill it with spiral
incremental numbers (first inwards and then outwards) print the arrays.
E.g. N = 5
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

21 22 23 24 25
20 7 8 9 10
19 6 1 2 11
18 5 4 3 12
17 16 15 14 13
#include<stdio.h>
int main () {
	int array[100][100],array2[100][100],i=0,j=0,k=1,n;
	printf("enter n\n");
	scanf("%d",&n);
	while (i<=(n+1)/2) {
		while (j<n-i) {
			array[i][j]=k;
			++k;
			++j;
		}
		if (k>(n*n)) {
			break;
		}
		++i;
		--j;
		while (i<=j) {
			array[i][j]=k;
			++k;
			++i;
		}
		--i;
		--j;
		while (j>=(n-i-1)) {
			array[i][j]=k;
			++k;
			--j;
		}
		++j;
		--i;
		while (i>j) {
			array[i][j]=k;
			++k;
			--i;
		}
		++i;
		j=i;
	}
	i=0;
	j=0;
	while (i<n) {
		j=0;
		while (j<n) {
			printf("%d\t",array[i][j]);
			++j;
		}
		printf("\n");
		++i;
	}
	k=n*n;
	i=0;
	j=n-1;
	while (i<=(n+1)/2) {
		while (j>=i) {
			array2[i][j]=k;
			--k;
			--j;
		}
		if (k==0) {
			break;
		}
		++j;
		++i;
		while (i<(n-j)) {
			array2[i][j]=k;
			--k;
			++i;
		}
		--i;
		++j;
		while (j<=i) {
			array2[i][j]=k;
			--k;
			++j;
		}
		--i;
		--j;
		while (i>=(n-j)) {
			array2[i][j]=k;
			--k;
			--i;
		}
		++i;
		--j;
	}
	i=0;
	j=0;
	printf("\n\n\n");
	while (i<n) {
		j=0;
		while (j<n) {
			printf("%d\t",array2[i][j]);
			++j;
		}
		printf("\n");
		++i;
	}
	return 0;
}
