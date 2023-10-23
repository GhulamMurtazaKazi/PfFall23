Question 07:
Your task is to develop a program to manage and sort shirt details for a clothing store. The shirt details
include the age and price for each shirt. Write a C program that sorts the shirt details based on age in
ascending order and, within the same age, sorts them based on price in descending order.
You are given 2D array: ages (representing the age of each shirt) and prices (representing the price of each
shirt). Assume any number of shirts and its prices by yourself.
Your expected output will show two different sorted list i.e., Sorted list in ascending order with respect to
Age and Sorted list in descending order with respect to Price.
#include<stdio.h>
int main () {
	int shirts[100][100],rows,columns,i=0,j,k=1,temp;
	printf("enter the total age categories in which shirts are available\n");
	scanf("%d",&rows);
		printf("enter the total number of shirts available in a single age category\n");
	scanf("%d",&columns);
	while (i<rows) {
		j=0;
		while (j<columns) {
			if (j==0) {
				printf("enter the age\n");
				scanf("%d",&shirts[i][j]);
				++j;
				continue;
			}
			if (j==1) {
				printf("enter the price of the shirt\n");
			}
				scanf("%d",&shirts[i][j]);
				++j;
			}
			++i;
		}
		j=0;
		i=0;
		while (i<rows) {
			k=i+1;
			while (k<rows) { 
				if (shirts[i][j]>shirts[k][j]) {  
					while (j<columns) { 
					temp=shirts[i][j];
					shirts[i][j]=shirts[k][j];
					shirts[k][j]=temp;
					++j;
				} 
				j=0;
			} 
			++k;
			}
			++i;
		}
		i=0;
		while (i<rows) {
		j=0;
		while (j<columns) {
			printf("%d\t",shirts[i][j]);
			++j;
			}
			printf("\n");
			++i;
		}
		i=0;
		while (i<rows) {
			j=1;
			while (j<columns) {
			k=j+1;
			while (k<columns) {
				if (shirts[i][j]<shirts[i][k]) {
				temp=shirts[i][j];
				shirts[i][j]=shirts[i][k];
				shirts[i][k]=temp;
			}
			++k;
			}	
			++j;	
			}
			++i;
		}
		i=0;
		printf("\n\n\n\n");
		while (i<rows) {
		j=0;
		while (j<columns) {
			printf("%d\t",shirts[i][j]);
			++j;
			}
			printf("\n");
			++i;
		}
		return 0;
	}
	
