#include <stdio.h>

int main() {
    int n, reversed_n = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_n = n;

    int temp_n = (n < 0) ? -n : n; 

    while (temp_n != 0) {
        remainder = temp_n % 10;
        reversed_n = reversed_n * 10 + remainder;
        temp_n /= 10;
    }

    printf("\nOriginal number: %d\n", original_n);

    if (original_n < 0) {
        printf("Result: %d is NOT a palindrome.\n", original_n);
    } else if (original_n == reversed_n) {
        printf("Result: %d is a PALINDROME.\n", original_n);
    } else {
        printf("Result: %d is NOT a palindrome.\n", original_n);
    }

    return 0;
}