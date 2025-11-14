#include <stdio.h>

int main() {
    float cost_price, selling_price, difference, percentage;

    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);

    printf("\n--- Result ---\n");

    difference = selling_price - cost_price;

    if (difference > 0) {
        percentage = (difference / cost_price) * 100.0;
        printf("PROFIT occurred.\n");
        printf("Profit amount: %.2f\n", difference);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (difference < 0) {
        percentage = ((-difference) / cost_price) * 100.0;
        printf("LOSS occurred.\n");
        printf("Loss amount: %.2f\n", -difference);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss (Break-Even).\n");
    }

    return 0;
}