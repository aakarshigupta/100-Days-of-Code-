#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("\nFactors of %d are: ", num);

    if (num <= 0) {
        printf("Invalid input (must be positive).\n");
        return 1;
    }

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d", i);
            if (i < num) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}