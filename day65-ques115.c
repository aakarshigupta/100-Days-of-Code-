#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    int i;
    int is_anagram = 1;

    printf("Enter the first string (s, lowercase only): ");
    scanf("%s", s);

    printf("Enter the second string (t, lowercase only): ");
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        is_anagram = 0;
    } else {
        for (i = 0; s[i] != '\0'; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram) {
        printf("\nResult: Anagram\n");
    } else {
        printf("\nResult: Not Anagram\n");
    }

    return 0;
}