Question: 02 
You are tasked with implementing a program to find the largest square submatrix of 1s in a given binary
matrix. Write a C program that does the following:
1. Input a binary matrix (a 2D array of 0s and 1s) from the user. The matrix can be of any size.
2. Find and display the largest square submatrix of 1s in the input matrix.
3. Display the dimensions (rows and columns) of the largest square submatrix found.
4. If there are more than one largest square matrix, then find any one of them.
#include<stdio.h>
int main () {
	int matrix[100][100],rows,columns,i=0,j,k,l,minimum,flag=1;
	printf("enter the numbers of rows\n");
	scanf("%d",&rows);
	printf("enter the numbers of columns\n");
	scanf("%d",&columns);
	printf("enter the elements\n");
	while (i<rows) {
		j=0;
		while (j<columns) {
			scanf("%d",&matrix[i][j]);
			++j;
		}
		++i;
	}
	i=rows-2;
	while (i>=0) {
		j=columns-2;
		while (j>=0) {
			k=i;
			if (matrix[i][j]==0) {
				--j;
				continue;
			}
			while (k<i+2) {
				l=j+1;
				while (l<j+2) {
					if (flag==1) {
						minimum=matrix[k][l];
						flag=0;
					}
					if (minimum>matrix[k][l]) {
					minimum=matrix[k][l];
				}
					++l;
				}
				++k;
			}
			matrix[i][j]=minimum+1;
			--j;
			flag=1;
		}
		--i;
			}
			i=0;
			k=0;           
			while (i<rows) {
				j=0;
				while (j<columns) {
				if (matrix[i][j]>k)
				k=matrix[i][j];
				++j;
			}
			++i;
			}
			printf("the largest square submatrix of 1's=%d",k);
			return 0;
	}
