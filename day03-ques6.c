#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the first number (num1): ");
    scanf("%d", &num1);

    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    printf("\n--- Before Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n--- After Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}