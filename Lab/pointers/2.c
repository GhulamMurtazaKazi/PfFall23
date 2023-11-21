Given the function prototype below, implement the function that reverses the array passed
to its arguments. Also write the main function that demonstrates this by taking 10 inputs from
a user and storing them in an array. Print the array, then use our function reverse and print
the array again to show that array has been reversed successfully. Use pointers in the function
reverse.
void reverse(int *arr, int size){
}

#include<stdio.h>
void reverse(int * array,int size) {
	int i=0,temp;
	while (i<size/2) {
		temp=array[i];
		array[i]=array[size-(1+i)];
		array[size-(1+i)]=temp;
		++i;
	}
}
int main () {
	int array[10],i=0;
	printf("enter the elements:");
	while (i<10) {
		scanf("%d",&array[i]);
		++i;
	}
	i=0;
	while (i<10) {
		printf("%d\n",array[i]); // corrected here
		++i;
	}
	reverse(array,10);
	printf("the reversed array is:");
	i=0; // reset i to 0 before printing the reversed array
	while (i<10) {
		printf("%d\n",array[i]); // corrected here
		++i;
	}
	return 0;
}

