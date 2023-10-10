7. Take 2 2x2 matrices as input in a 2D array. Then, multiply the 2 matrices and print the final output
matrix.
  #include<stdio.h>
int main () {
	int A[2][2],B[2][2],i=0,j,sum,k;
  printf("enter the elements  of  matrixA");
  while (i<2) {
		j=0;
		while (j<2) {
			scanf("%d",&A[i][j]);
			++j;
		}
		++i;
	}
	i=0;
	printf("enter the elements of matrix B\n");
		while (i<2) {
		j=0;
		while (j<2) {
			scanf("%d",&B[i][j]);
			++j;
		}
		++i;
	}
	i=0;
	printf("the multiplication of matrixA and matrixB is \n");
	while(i<2) {
		k=0;
		while (k<2) {
			j=0;
			sum=0;
			while (j<2) {
				sum=sum+A[i][j]*B[j][k];
				++j;
			}
			printf("%d\t",sum);
			++k;
		}
		printf("\n");
		++i;
	}
	
		return 0;
	}
