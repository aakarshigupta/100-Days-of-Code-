#include <stdio.h>

int main() {
    int month_num;
    char *month_name;
    int days;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month_num);

    printf("\n--- Result ---\n");

    switch (month_num) {
        case 1:
            month_name = "January";
            days = 31;
            break;
        case 2:
            month_name = "February";
            days = 28; // Assuming a non-leap year for simplicity
            break;
        case 3:
            month_name = "March";
            days = 31;
            break;
        case 4:
            month_name = "April";
            days = 30;
            break;
        case 5:
            month_name = "May";
            days = 31;
            break;
        case 6:
            month_name = "June";
            days = 30;
            break;
        case 7:
            month_name = "July";
            days = 31;
            break;
        case 8:
            month_name = "August";
            days = 31;
            break;
        case 9:
            month_name = "September";
            days = 30;
            break;
        case 10:
            month_name = "October";
            days = 31;
            break;
        case 11:
            month_name = "November";
            days = 30;
            break;
        case 12:
            month_name = "December";
            days = 31;
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1;
    }

    printf("%s (Month %d) has %d days.\n", month_name, month_num, days);

    return 0;
}