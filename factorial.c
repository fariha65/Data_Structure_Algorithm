#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.");
    } else {
        int result = factorial(number);
        printf("The factorial of %d is %d\n", number, result);
    }

    return 0;
}

