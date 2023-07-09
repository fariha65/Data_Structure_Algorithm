#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;

    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}

