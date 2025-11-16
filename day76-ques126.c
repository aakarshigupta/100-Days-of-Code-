#include <stdio.h>
#include <string.h>

int main() {
    FILE *file_ptr;
    char filename[100];
    char buffer[200];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("\nError: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("\nFile '%s' content:\n", filename);
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(file_ptr);

    return 0;
}