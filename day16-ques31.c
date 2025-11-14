#include <stdio.h>
#include <math.h>

int main() {
    int decimal_num, temp_num, remainder, binary_num = 0, place = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &decimal_num);

    temp_num = decimal_num;

    if (temp_num == 0) {
        printf("\nBinary representation of %d is: 0\n", decimal_num);
    } else if (temp_num > 0) {
        while (temp_num > 0) {
            remainder = temp_num % 2;
            binary_num += remainder * place;
            place *= 10;
            temp_num /= 2;
        }
        printf("\nBinary representation of %d is: %d\n", decimal_num, binary_num);
    } else {
        printf("\nNegative numbers are not handled in this implementation.\n");
    }

    return 0;
}