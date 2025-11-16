#include <stdio.h>

int main() {
    int days_late;
    float fine = 0.0;

    printf("Enter the number of late days: ");
    scanf("%d", &days_late);

    printf("\n--- Result ---\n");

    if (days_late > 30) {
        printf("Membership Cancelled due to %d days late.\n", days_late);
    } else if (days_late > 0) {
        int temp_days = days_late;

        if (temp_days > 10) {
            int days_in_slab = temp_days - 10;
            if (days_in_slab > 20) {
                days_in_slab = 20; 
            }
            fine += days_in_slab * 6.0;
            temp_days -= days_in_slab;
        }
        if (temp_days > 5) {
            int days_in_slab = temp_days - 5;
            fine += days_in_slab * 4.0;
            temp_days -= days_in_slab;
        }
        if (temp_days > 0) {
            fine += temp_days * 2.0;
        }

        printf("Total late days: %d\n", days_late);
        printf("Total Fine: Rs. %.2f\n", fine);
    } else {
        printf("No late days. No fine.\n");
    }

    return 0;
}