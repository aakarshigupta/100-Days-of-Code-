#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("\n--- Numbers from 1 to %d ---\n", n);

    if (n > 0) {
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}