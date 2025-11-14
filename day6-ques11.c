#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
     
    if (num % 2 == 0) {
        printf("\n%d is an EVEN number.\n", num);
    } else {
        printf("\n%d is an ODD number.\n", num);
    }

    return 0;
}