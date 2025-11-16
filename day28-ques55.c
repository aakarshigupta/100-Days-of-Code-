#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("\nPrime numbers from 1 to %d are:\n", n);

    if (n >= 2) {
        for (i = 2; i <= n; i++) {
            is_prime = 1;
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("No prime numbers in this range.\n");
    }

    return 0;
}