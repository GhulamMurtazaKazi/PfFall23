11. You are given an n x n integer matrix grid. Generate a matrix “maxLocal” of size (n - 2) x (n - 2) such
that: maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1
and column j + 1.
In other words, we want to find the largest value in every contiguous 3x3 matrix in the grid.
Return the generated matrix.
  #include<stdio.h>
int main () {
	int rows,columns,grid[100][100],maxlocal[100][100],i=0,j,maximum,flag=1,k=0,l;
	printf("enter the number of rows\n");
	scanf("%d",&rows);
		printf("enter the number of columns\n");
	scanf("%d",&columns);
	if (rows!=columns) {
		printf("the grid has to be  a square matrix");
		return 0;
	}
	printf("enter the elemensts of the matrix\n");
	while (i<rows) {
		j=0;
		while (j<columns) {
			scanf("%d",&grid[i][j]);
			++j;
		}
		++i;
	}
	i=0;
	while (i<(rows-2)) {
		j=0;
		while  (j<(columns-2)) {
				flag=1;
			k=i;
			while (k<=(i+2)) {
				l=j;
			while (l<=(j+2)) {
			if (flag==1) {
			maximum=grid[k][l]; 
			flag=0;
		}
			if  (grid[k][l]>maximum)
			{
				maximum=grid[k][l];
			}
			++l;
			} 
			 ++k;
		}
		maxlocal[i][j]=maximum;
		printf("%d",maximum);
		++j;
		printf("\t");
		}
		++i;
		printf("\n");
	}
	
	
	return 0;
}
