#include <stdio.h>

// Function to calculate x^y using a loop (alternative to pow())
float power(float base, float exp) {
    float result = 1.0;
    int i;
    for (i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
    float rate_factor;

    printf("Enter the Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (R in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time period (T in years - must be an integer for this loop): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100.0;
    rate_factor = 1 + rate / 100.0;
    compound_interest = principal * power(rate_factor, (int)time) - principal;

    printf("\n--- Results ---\n");
    printf("Simple Interest (SI): %.2f\n", simple_interest);
    printf("Compound Interest (CI): %.2f\n", compound_interest);

    return 0;
}