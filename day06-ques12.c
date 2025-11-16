#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\n--- Result ---\n");
    if (num == 0) {
        printf("The number is ZERO.\n");
    } else {
        if (num > 0) {
            printf("The number is POSITIVE.\n");
        } else {
            printf("The number is NEGATIVE.\n");
        }
    }

    return 0;
}