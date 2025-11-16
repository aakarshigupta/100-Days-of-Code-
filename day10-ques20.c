#include <stdio.h>

int main() {
    int day_num;

    printf("Enter a number (1-7) to find the day of the week: ");
    scanf("%d", &day_num);

    printf("\n--- Result ---\n");

    switch (day_num) {
        case 1:
            printf("Day %d is Sunday.\n", day_num);
            break;
        case 2:
            printf("Day %d is Monday.\n", day_num);
            break;
        case 3:
            printf("Day %d is Tuesday.\n", day_num);
            break;
        case 4:
            printf("Day %d is Wednesday.\n", day_num);
            break;
        case 5:
            printf("Day %d is Thursday.\n", day_num);
            break;
        case 6:
            printf("Day %d is Friday.\n", day_num);
            break;
        case 7:
            printf("Day %d is Saturday.\n", day_num);
            break;
        default:
            printf("Invalid Input: Please enter a number between 1 and 7.\n");
    }

    return 0;
}