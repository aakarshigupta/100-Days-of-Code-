#include <stdio.h>

long long factorial(int digit) {
    long long fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp_n, remainder;
    long long sum_of_factorials = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nInvalid input (must be positive).\n");
        return 1;
    }

    temp_n = n;

    while (temp_n > 0) {
        remainder = temp_n % 10;
        sum_of_factorials += factorial(remainder);
        temp_n /= 10;
    }

    printf("\nOriginal number: %d\n", n);

    if (sum_of_factorials == n) {
        printf("Result: %d is a STRONG number.\n", n);
    } else {
        printf("Result: %d is NOT a strong number.\n", n);
    }

    return 0;
}