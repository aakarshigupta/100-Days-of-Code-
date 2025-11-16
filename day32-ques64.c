#include <stdio.h>

int main() {
    int n, temp_n, remainder;
    int counts[10] = {0}; 
    int max_count = -1;
    int most_frequent_digit = -1;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    temp_n = n;
    if (temp_n < 0) {
        temp_n = -temp_n;
    }
    if (temp_n == 0) {
        most_frequent_digit = 0;
        max_count = 1;
    } else {
        while (temp_n > 0) {
            remainder = temp_n % 10;
            counts[remainder]++;
            temp_n /= 10;
        }
        for (int i = 0; i <= 9; i++) {
            if (counts[i] > max_count) {
                max_count = counts[i];
                most_frequent_digit = i;
            }
        }
    }

    printf("\nOriginal number: %d\n", n);
    printf("The most frequently occurring digit is: %d (occurs %d times)\n", most_frequent_digit, max_count);

    return 0;
}