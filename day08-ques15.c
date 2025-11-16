#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    printf("\n--- Result ---\n");

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE ALPHABET.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE ALPHABET.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a DIGIT.\n", ch);
    } else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}