TASK 1: 
For this task you are creating a universal array printing function. Create a function in C that takes a void* as an argument along with size and some way of know what kind of data is stored. Then prints the values stored in the memory location pointed to by the void pointer. Use appropriate casting.
#include <stdio.h>

void printArray(void *ptr, int size, char type);
int main(){
	char charArray[3] = {'a', 'b', 'c'};
	int numArray[3] = {1, 2, 3};
	float floatArray[3] = {1.2, 2.1, 3.2};

	printArray((void *)numArray, 3, 'i');
	printf("\n");
	printArray((void *)charArray, 3, 'c');
	printf("\n");
	printArray((void *)floatArray, 3, 'f');
	

}

void printArray(void *ptr, int size, char type){
	for (int i = 0; i < size; ++i)
	{
		if (type == 'i')
		{
			printf("%d ", *((int*)ptr + i));
		}
		else if (type == 'c')
		{
			printf("%c ", *((char*)ptr + i));
		}
		else if (type == 'f')
		{
			printf("%f ", *((float*)ptr + i));	
		}
		else{
			printf("Not a data type\n");
		}
	}
}
