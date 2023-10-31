Task 2: Write a function for finding product of 2 numbers without using multiplication operator and
loops. Use recursion and addition only.

#include <stdio.h>
#include <stdlib.h>

int multiply_recursively(int a, int b) {
  if (b == 0) {
    return 0;
  } else {
    return a + multiply_recursively(a, b - 1);
  }
}

int main() {
  int a, b;
  printf("Enter the two numbers whose product you want to find: ");
  scanf("%d %d", &a, &b);

  int product_of_a_and_b = multiply_recursively(a, b);

  printf("The product of %d and %d is %d\n", a, b, product_of_a_and_b);

  return 0;
}
