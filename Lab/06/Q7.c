Write a C Program that takes a user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45
#include<stdio.h>

int main () {
    float sum = 0, numbers[10000];
    int i, size;

    printf("Enter the size of array:");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    printf("The sum of the numbers is %f", sum);

    return 0;
}
