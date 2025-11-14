#include <stdio.h>

int main() {
    int units;
    float bill_amount = 0.0;
    int remaining_units;

    printf("Enter the total units consumed: ");
    scanf("%d", &units);

    printf("\n--- Result ---\n");
    printf("Units consumed: %d\n", units);

    remaining_units = units;
    if (remaining_units > 300) {
        int consumed = remaining_units - 300;
        bill_amount += consumed * 12.0;
        remaining_units -= consumed;
    }
    if (remaining_units > 200) {
        int consumed = remaining_units - 200;
        bill_amount += consumed * 10.0;
        remaining_units -= consumed;
    }
    if (remaining_units > 100) {
        int consumed = remaining_units - 100;
        bill_amount += consumed * 7.0;
        remaining_units -= consumed;
    }
    if (remaining_units > 0) {
        bill_amount += remaining_units * 5.0;
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill_amount);

    return 0;
}
