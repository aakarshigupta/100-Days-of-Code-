#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n >= 2) {
        for (i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("\nThe product of even numbers from 1 to %d is: %lld\n", n, product);
    } else if (n == 0 || n == 1) {
        printf("\nThere are no even numbers in the range 1 to %d. Product is 1.\n", n);
    } else {
        printf("\nPlease enter a positive integer.\n");
    }

    return 0;
}