#include <stdio.h>

int main() {
    char ch;
    printf("Enter a single character: ");
    scanf(" %c", &ch);
    printf("\n--- Result ---\n");

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        
        printf("%c is a VOWEL.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a CONSONANT.\n", ch);
    } else {
        printf("%c is NOT an alphabet character.\n", ch);
    }

    return 0;
}