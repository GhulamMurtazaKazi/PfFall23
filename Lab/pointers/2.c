Given the function prototype below, implement the function that reverses the array passed
to its arguments. Also write the main function that demonstrates this by taking 10 inputs from
a user and storing them in an array. Print the array, then use our function reverse and print
the array again to show that array has been reversed successfully. Use pointers in the function
reverse.
void reverse(int *arr, int size){
}

#include <stdio.h>

// Function to reverse an array using pointers
int i;
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    for (; start < end; start++, end--) {
        // Swap the elements at start and end
        int temp = *start;
        *start = *end;
        *end = temp;
    }
}

int main() {
    int arr[10];
    int size = 10;

    // Input 10 numbers and store them in the array
    printf("Enter 10 numbers:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the reverseArray function to reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    printf("Reversed array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
