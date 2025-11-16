#include <stdio.h>

int main() {
    int rows = 7;
    int i, j, k;
    int center = (rows + 1) / 2; 
    for (i = 1; i <= center; i++) {
        for (j = 1; j <= center - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= rows - center; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * (center - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}