Task 3: Euclid gave a recursive description of GCD a very long time ago. Here is the simplified version
of it.
01 If b is 0, then the GCD of a and b is a. This is the
base case.
02 If b is not 0, then the GCD of a and b is the same as
the GCD of b and the remainder when a is divided by b.
Mathematically, GCD(a, b) = GCD(b, a % b), where "%" denotes the remainder when a is divided by b,
and GCD(a, 0) is a.
Write a function for finding GCD first using loops and then using recursion.
#include <stdio.h>

int GCD_iter(int a, int b)
{
    // loop until b is 0
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // return a when b is 0
    return a;
} // end GCD_iter(int, int)

int GCD_rec(int a, int b)
{
    // general case
    if (b) {
        return GCD_rec(b, a % b);
    }

    // base case when b is 0
    return a;
} // end GCD_rec(int, int)

int main()
{
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    
    printf("GCD using iterations: %d\n", GCD_iter(n1, n2));
    printf("GCD using recursions: %d", GCD_rec(n1, n2));
    return 0;
} // end main()
