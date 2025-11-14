#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds_remainder;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    seconds_remainder = total_seconds % 3600;
    minutes = seconds_remainder / 60;
    seconds_remainder = seconds_remainder % 60;

    printf("\nTime in seconds: %d\n", total_seconds);
    printf("Converted format (H:M:S): %02d:%02d:%02d\n", hours, minutes, seconds_remainder);

    return 0;
}