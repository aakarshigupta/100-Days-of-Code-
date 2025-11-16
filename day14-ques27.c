#include <stdio.h>

int main() {
    int n, i, odd_num, sum = 0;

    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    printf("\n--- Result ---\n");

    if (n > 0) {
        for (i = 1; i <= n; i++){
            odd_num = 2 * i - 1;
            sum += odd_num;
        }
        printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}