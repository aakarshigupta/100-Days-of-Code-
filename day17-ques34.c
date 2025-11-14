#include <stdio.h>

int main() {
    int n, i, is_prime = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0; 
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0; 
                break;
            }
        }
    }

    printf("\nNumber entered: %d\n", n);

    if (is_prime) {
        printf("Result: %d is a PRIME number.\n", n);
    } else {
        printf("Result: %d is NOT a prime number.\n", n);
    }

    return 0;
}