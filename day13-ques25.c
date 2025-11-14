#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("\n%d %% %d = %.0lf\n", (int)num1, (int)num2, result);
            } else {
                printf("\nError: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nError: Invalid operator.\n");
    }

    return 0;
}