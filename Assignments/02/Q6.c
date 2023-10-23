Question 06
Given a 1D array of N integers, and a target integer t.
Write a ‘C’ program to find all different number pairs in the array that have sum equal to t.
Sample Input:
List: 1, 8, 10, 12, 7, 4, 3 and t: 11
Sample Output:
Pairs: (1, 10), (7,4), (8,3)
  #include<stdio.h>
int main () {
	int numbers[10000],size,i=0,j,target;
		printf("enter the target integer\n");
	scanf("%d",&target);
	printf("enter the total number of integers\n");
	scanf("%d",&size);
	printf("enter the integers\n");
 	while (i<size) {
 		scanf("%d",&numbers[i]);
 		++i;
	 }
	 i=0;
	 printf("pairs:");
	 while (i<size) {
	 	j=i+1;
	 	while (j<size) {
	 		if (numbers[i]+numbers[j]==target)
	 		printf("(%d,%d)\t",numbers[i],numbers[j]);
	 		++j;
		 } 
		 ++i;
	 } 
		return 0;	
}
