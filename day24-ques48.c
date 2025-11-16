#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;
    
    printf("The number pattern is:\n");

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}