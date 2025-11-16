#include <stdio.h>

int main() {
    int rows = 9;
    int i, j;
    int center = (rows + 1) / 2; 
    for (i = 1; i <= center; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= rows - center; i++) {
        for (j = 1; j <= 2 * (center - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}