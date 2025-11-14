#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("\nTemperature in Celsius: %.2f\n", celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}