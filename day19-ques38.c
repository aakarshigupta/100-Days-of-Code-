#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_n = n;

    int temp_n = (n < 0) ? -n : n;

    while (temp_n > 0) {
        remainder = temp_n % 10;
        sum += remainder;
        temp_n /= 10;
    }

    printf("\nOriginal number: %d\n", original_n);
    printf("Sum of digits: %d\n", sum);

    return 0;
}