QUESTION # 3
You are working on a text processing program. Create a C program that reads a
text input from the user and searches for a specific character (e.g., 'a')
within the text using the strchr function. Display the total count of
occurrences of the character in the input text.
#include <stdio.h>
#include <string.h>

int main() {
    char text[100], ch;
    char *ptr;
    int count = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    ptr = strchr(text, ch);
    while(ptr != NULL) {
        count++;
        ptr = strchr(ptr + 1, ch);
    }

    printf("The character '%c' occurred %d times.\n", ch, count);

    return 0;
}

