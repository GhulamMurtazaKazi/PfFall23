Write a C Program that takes a user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45
  #include<stdio.h>
int main () {
	int n,i=0,sum=0;
	printf("enter the length of array\n");
	scanf("%d",&n);
	float list[n];
	printf("enter numbers\n");
	
	while (i<n) {
	scanf("%f",&list[i]);
	sum=sum+list[i];
	++i;
}
printf("%d",sum);
return 0;
	
	
	
}
