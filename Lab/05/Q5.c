Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit or special character, using if else.
  #include<stdio.h>
int main () {
	char character;
	printf("enter any character\n");
	scanf("%c",&character);
	if (character>=97&&character<=122) {
		printf("small alphabet");
	} else if (character>=65&&character<=90) {
		printf("capital alphabet");
	} else if (character>=48&&character<=57) {
		printf("a digit ");
	} else {
		printf("special character");
	}
	return 0;
	
}
