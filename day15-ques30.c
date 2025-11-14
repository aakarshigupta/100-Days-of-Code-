#include <stdio.h>

int main() {
    int n, i;
    // Use long long for the result to handle larger factorials
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nFactorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("\nFactorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}