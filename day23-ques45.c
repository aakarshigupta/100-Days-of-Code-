#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nPlease enter a positive number of terms.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        numerator = 2 * i;
        denominator = 4 * i - 1;
        sum += (double)numerator / denominator;
    }

    printf("\nSum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}