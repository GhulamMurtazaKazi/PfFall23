#include<stdio.h>
int main () {
	char option;
	printf("Are you sure to delete [Y/y]/[N/n]?");
	scanf("%c",&option);
	switch (option)
	{ case 'Y':
		case 'y':
			printf("deleted successfully");
			break;
			case 'N':
			case 'n':
			printf("deleted cancelled");
			break;
			default:
				printf("choose the right option");
	}
return 0;
}
