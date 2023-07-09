#include <stdio.h>

void printEvenNumbers(int n) {
    if (n <= 0) {
        return;
    }

    printEvenNumbers(n - 1);

    if (n % 2 == 0) {
        printf("%d ", n);
    }
}

int main() {
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Even numbers up to %d: ", limit);
    printEvenNumbers(limit);

    return 0;
}

