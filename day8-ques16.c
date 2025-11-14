#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter the first number (num1): ");
    scanf("%d", &num1);

    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    printf("Enter the third number (num3): ");
    scanf("%d", &num3);

    printf("\n--- Result ---\n");
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}