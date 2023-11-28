TASK 4: 
Develop a C program that takes a sentence as input and uses pointer arithmetic to reverse each word in the sentence while keeping the words in their original order. Print the modified sentence.
  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Whole question can be done using arr[i] notation too after dma
int main(){
	int length;
	char temp;
	printf("Enter The Length Of Your String: ");
	scanf("%d", &length);
	char *arr = (char *)malloc(length * sizeof(char));
	printf("Enter A Sentence: ");
	getchar();
	fgets(arr, length + 1, stdin);
	int i = 0, count = 0;
	while(i <= length){
		count++;
		if (*(arr+i) == ' ' || *(arr + i) == '\0')
		{
			int range = i - (count / 2);
			int last_letter = 0;
			for (int j = i - (count - 1); j < range; ++j)
			{
				char temp = *(arr + j);
				*(arr + j) = *(arr + i - 1 - last_letter);
				*(arr + i - 1 - last_letter) = temp;
				last_letter++;
			}
			count = 0;
		}
		if (*(arr + i) == ' ')
		{
			count = 0;
		}
		i++;
	}
	puts(arr);
	free(arr);
}
