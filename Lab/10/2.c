TASK 2:
Write a C program that implements a function to swap the values of two variables using only pointers (without using any arithmetic or temporary variables). Your function should be generic and work for variables of different data types. Hint: Use bitwise operator XOR.
#include <stdio.h>

void swap(void *ptr1, void *ptr2, char type);
int main(){
	int a = 2,b = 3;
	char l1 = 'f', l2 = 'g';
	float n1 = 2.5, n2 = 3.5;
	swap((void *) &a, (void *) &b, 'i');
	printf("a: %d, b: %d\n", a, b);
	swap((void *) &l1, (void *) &l2, 'c');
	printf("l1: %c, l2: %c\n", l1, l2);
	swap((void *) &n1, (void *) &n2, 'f');
	printf("n1: %f, n2: %f\n", n1, n2);
}

void swap(void *ptr1, void *ptr2, char type){
	if (type == 'i' || type == 'f')
	{
		*(int *)ptr1 = *(int *)ptr1 ^ *(int *)ptr2;
		*(int *)ptr2 = *(int *)ptr1 ^ *(int *)ptr2;
		*(int *)ptr1 = *(int *)ptr1 ^ *(int *)ptr2; 
	}
	else if (type == 'c')
	{
		*(char *)ptr1 = *(char *)ptr1 ^ *(char *)ptr2;
		*(char *)ptr2 = *(char *)ptr1 ^ *(char *)ptr2;
		*(char *)ptr1 = *(char *)ptr1 ^ *(char *)ptr2;
	}
	else {
		printf("Incorrect Data Type\n");
	}
}
