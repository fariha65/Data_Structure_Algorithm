#include <stdio.h>

void printOddNumbers(int n) {
    if (n <= 0) {
        return;
    }

    printOddNumbers(n - 1);

    if (n % 2 != 0) {
        printf("%d ", n);
    }
}

int main() {
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Odd numbers up to %d: ", limit);
    printOddNumbers(limit);

    return 0;
}

