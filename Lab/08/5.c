QUESTION # 5
In this C program, you are tasked with creating a function
called decideCarUsage that helps users decide whether they should use their car
on a particular day of the week. Users provide the numeric part of their car's
number and the day of the week (1 to 7). The program applies a simple rule:
even-numbered cars should be used on even days, and odd-numbered cars on odd
days. The function returns 1 if the car should be used and 0 if it should not.
#include <stdio.h>

// Function to decide whether to use the car
int decideCarUsage(int carNumber, int dayOfWeek) {
    // Check if the car number and day of the week have the same parity
    if ((carNumber % 2 == 0 && dayOfWeek % 2 == 0) || (carNumber % 2 != 0 && dayOfWeek % 2 != 0)) {
        return 1; // Use the car
    } else {
        return 0; // Do not use the car
    }
}

int main() {
    int carNumber, dayOfWeek;

    // Prompt the user for input
    printf("Enter the numeric part of your car's number: ");
    scanf("%d", &carNumber);

    printf("Enter the day of the week (1 to 7): ");
    scanf("%d", &dayOfWeek);

    // Call the decideCarUsage function to make the decision
    int shouldUseCar = decideCarUsage(carNumber, dayOfWeek);

    // Display the decision
    if (shouldUseCar) {
        printf("You should use your car today.\n");
    } else {
        printf("You should not use your car today.\n");
    }

    return 0;
}


