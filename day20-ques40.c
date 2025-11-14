#include <stdio.h>
#include <string.h>

int main() {
    char binary_num[100];
    int i, len;

    printf("Enter a binary number (string of 0s and 1s): ");
    scanf("%s", binary_num);

    len = strlen(binary_num);

    printf("\nOriginal Binary Number: %s\n", binary_num);
    printf("1's Complement: ");

    for (i = 0; i < len; i++) {
        if (binary_num[i] == '0') {
            printf("1");
        } else if (binary_num[i] == '1') {
            printf("0");
        } else {
            return 1;
        }
    }
    printf("\n");

    return 0;
}