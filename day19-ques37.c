#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("\nThe LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}