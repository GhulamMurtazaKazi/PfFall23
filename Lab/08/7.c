QUESTION # 7
You are developing a C program for a coffee shop that offers discounts based on
customer loyalty and purchase history. The program should work as follows:

The program should have a user-defined function named calculateDiscount that takes two
parameters: the customer's total purchase amount and the number of times they
have visited the shop in the past month.

determine the discount based on the following criteria:
If the customer has visited the shop more than 10 times in the past month and
their total purchase amount is $50 or more, they get a 15% discount.
If the customer has visited the shop more than 5 times in the past month and their
total purchase amount is $30 or more, they get a 10% discount.
For all other customers, no discount is applied.
The function should return the calculated discount amount.


In the main part of the program, prompt the user
to input their total purchase amount and the number of times they have visited
the shop. Call the calculateDiscount function to calculate the discount, and
display the discount amount to the user.
  #include <stdio.h>

// Function to calculate the discount based on the criteria
float calculateDiscount(float totalPurchaseAmount, int visits) {
    if (visits > 10 && totalPurchaseAmount >= 50.0) {
        return 0.15 * totalPurchaseAmount; // 15% discount
    } else if (visits > 5 && totalPurchaseAmount >= 30.0) {
        return 0.10 * totalPurchaseAmount; // 10% discount
    } else {
        return 0.0; // No discount
    }
}

int main() {
    float totalPurchaseAmount;
    int visits;

    // Prompt the user for input
    printf("Enter the total purchase amount: $");
    scanf("%f", &totalPurchaseAmount);

    printf("Enter the number of times you have visited the shop in the past month: ");
    scanf("%d", &visits);

    // Calculate the discount using the function
    float discount = calculateDiscount(totalPurchaseAmount, visits);

    // Display the discount amount
    if (discount > 0) {
        printf("You qualify for a discount of $%.2f\n", discount);
    } else {
        printf("No discount is applied.\n");
    }

    return 0;
}

