7. Let us work on the menu of a library. Create a structure containing book information like
accession number, name of author, book title and flag to know whether book is issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets
increased by 1)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



typedef struct book
{
	int accnum;
	char name[30];
	char title[30];
	int flag;
}book;
void display(book library_array[], int i);
int main(){
	int n;
	char userInput[30];
	printf("Enter The Number of Books: ");
	scanf("%d", &n);
	book *library_array = (book *)malloc(n * sizeof(book));
	for (int i = 0; i < n; ++i)
	{
		printf("Book %d\n", i+1);
		printf("Enter Accession Number: ");
		scanf("%d", &library_array[i].accnum);
		printf("Enter Author Name: ");
		getchar();
		gets(library_array[i].name);
		printf("Enter Book Title: ");
		gets(library_array[i].title);
		printf("Enter 1 If Issued, Else Enter 0: ");
		scanf("%d", &library_array[i].flag);
	}
	int choice;
	printf("Enter Digit 1 To 6:\n1: Display book information\n2: Add a new book\n3: Display all the books in the library of a particular author\n"
		"4: Display the number of books of a particular title\n5: Display the total number of books in the library\n6: Issue a book\n");
	printf("Enter A Choice: ");
	scanf("%d", &choice);
	switch(choice){
		case 1: 
			for (int i = 0; i < n; ++i)
			{
				printf("Book %d\n", i+1);
				printf("Accession Number: %d, Author Name: %d, Book Title: %d, Issued: ", library_array[i].accnum, library_array[i].name, library_array[i].title);
				if (library_array[i].flag == 0)
				{
					printf("Yes\n");
				} else {
					printf("No\n");
				}
			}
		case 2:
			library_array = (book*)realloc(library_array, (n+1) * sizeof(book));
			library_array[n].accnum = 1;
			printf("Enter Author Name: ");
			getchar();
			gets(library_array[n].name);
			printf("Enter Book Title: ");
			gets(library_array[n].title);
			printf("Enter 1 If Issued, Else Enter 0: ");
			scanf("%d", &library_array[n].flag);
		case 3:
			printf("Enter Author Name: ");
			getchar();
			gets(userInput);
			for (int i = 0; i < n; ++i)
			{
				if (strcmp(userInput, library_array[i].name) == 0)
				{
					display(library_array, i);
					break;
				}
			}
		case 4:
			printf("Enter Title: ");
			getchar();
			gets(userInput);
			for (int i = 0; i < n; ++i)
			{
				if (strcmp(userInput, library_array[i].title) == 0)
				{
					display(library_array, i);
					break;
				}
			}
		case 5:
			printf("Number of books: %d\n", n);
			break;
		case 6:
			printf("Enter the title of the book to be issued: ");
			getchar();
			gets(userInput);
			for (int i = 0; i < n; ++i)
			{
				if (strcmp(userInput, library_array[i].title) == 0)
				{
					library_array[i].accnum -= 1;
					library_array[i].flag = 1;
					break;
				}
			}
	}
	free(library_array);
}


void display(book library_array[], int i)
{
	printf("Accession Number: %d, Author Name: %s, Book Title: %s, Issued: ", library_array[i].accnum, library_array[i].name, library_array[i].title);
	if (library_array[i].flag == 0)
	{
		printf("Yes\n");
	} else {
		printf("No\n");
	}
}
