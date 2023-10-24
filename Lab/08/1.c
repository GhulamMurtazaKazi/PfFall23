QUESTION # 1
Create a C program that swaps the values of two integers using a user-defined
function, swapIntegers. The user inputs two integer values, and the program
uses the function to swap them. It should perform the swap, and display the
updated values.

#include <stdio.h>

void swapIntegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapIntegers(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
