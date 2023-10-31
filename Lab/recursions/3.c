Task 3: Euclid gave a recursive description of GCD a very long time ago. Here is the simplified version
of it.
01 If b is 0, then the GCD of a and b is a. This is the
base case.
02 If b is not 0, then the GCD of a and b is the same as
the GCD of b and the remainder when a is divided by b.
Mathematically, GCD(a, b) = GCD(b, a % b), where "%" denotes the remainder when a is divided by b,
and GCD(a, 0) is a.
Write a function for finding GCD first using loops and then using recursion.

