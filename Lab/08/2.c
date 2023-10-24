QUESTION # 2
Write a C program with a user-defined function calculate to perform basic arithmetic
operations such as addition, subtraction, multiplication, and division. The
program should take two numbers and an operation choice as input, and then use
the function to perform the operation.
#include <stdio.h>

// User-defined function to perform basic arithmetic operations
double calculate(double num1, double num2, char op) {
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if(num2 != 0)
                return num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 0;
            }
        default:
            printf("Invalid operation.\n");
            return 0;
    }
}

int main() {
    double num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    result = calculate(num1, num2, op);

    printf("Result: %.2lf\n", result);

    return 0;
}

