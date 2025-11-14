#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;
    printf("Enter the first number (a): ");
    scanf("%f", &num1);
    printf("Enter the second number (b): ");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    printf("\n--- Results for a = %.2f and b = %.2f ---\n", num1, num2);
    printf("Sum (a + b): %.2f\n", sum);
    printf("Difference (a - b): %.2f\n", difference);
    printf("Product (a * b): %.2f\n", product);
    if (num2 == 0) {
        printf("Quotient (a / b): Undefined (Cannot divide by zero)\n");
    } else {
        quotient = num1 / num2;
        printf("Quotient (a / b): %.2f\n", quotient);
    }

    return 0;
}