Task 1: Write a function for finding factorial of any integer N using recursion.
#include <stdio.h>
#include <stdlib.h>

long long int factorial(int N) {
  if (N == 0) {
    return 1;
  } else {
    return N * factorial(N - 1);
  }
}

int main() {
  int N;
  printf("Enter the number whose factorial you want to find: ");
  scanf("%d", &N);

  long long int factorial_of_N = factorial(N);

  printf("The factorial of %d is %lld\n", N, factorial_of_N);

  return 0;
}
