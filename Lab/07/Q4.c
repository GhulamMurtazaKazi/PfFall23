4. Take a 2D array(Matrix) as input from user and check that array is symmetric or not. If array is
symmetric then print “Array is Symmetric” with array if not, then print “array is not symmetric” with
given array.
Note: A symmetric matrix is a matrix that is equal to its transpose. Where elements in first row are
equal to elements in first column and so on.
Formal Definition: Aij = Aji.
  #include<stdio.h>
int main () {
	int matrix[100][100],i=0,j,rows,columns;
	printf("enter the number of rows\n");
	scanf("%d",&rows);
		printf("enter the number of columns\n");
	scanf("%d",&columns);
	printf("enter the elements of the matrix\n");
	while (i<rows)
	{
		j=0;
		while (j<columns) {
			scanf("%d",&matrix[i][j]);
			++j;
		}
		++i;
	}
	i=0;
	while (i<rows) {
		j=0;
		while (j<columns) {
			if (matrix[i][j]==matrix[j][i]) {
			++j;
		}
			else {
			printf("the matrix isnot symmetric with the given array");
			return 0;
		}
		}
		++i;
	}
	printf("the matrix is symmetric with the given array");
	return 0;
}
