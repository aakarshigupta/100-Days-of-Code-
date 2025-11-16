#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, last_digit, first_digit, digits = 0, swapped_n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nNegative numbers are not handled.\n");
        return 1;
    }

    temp = n;
    last_digit = temp % 10;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    if (digits <= 1) {
        printf("\nOriginal number: %d\n", n);
        printf("Swapped number: %d\n", n);
        return 0;
    }

    first_digit = n / (int)pow(10, digits - 1);

    swapped_n = n / 10;
    swapped_n = swapped_n % (int)pow(10, digits - 2);

    swapped_n = last_digit * (int)pow(10, digits - 1) + swapped_n;
    swapped_n = swapped_n * 10 + first_digit;

    printf("\nOriginal number: %d\n", n);
    printf("Swapped number: %d\n", swapped_n);

    return 0;
}