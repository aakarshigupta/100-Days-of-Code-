#include <stdio.h>

int main() {
    int n, i, sum_of_divisors = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("\nOriginal number: %d\n", n);

    if (n <= 0) {
        printf("Result: Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == n) {
        printf("Result: %d is a PERFECT number.\n", n);
    } else {
        printf("Result: %d is NOT a perfect number.\n", n);
    }

    return 0;
}