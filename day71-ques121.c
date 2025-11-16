#include <stdio.h>

int main() {
    char name[50];
    int age;
    FILE *file_ptr;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    file_ptr = fopen("info.txt", "w");

    if (file_ptr == NULL) {
        printf("\nError opening file.\n");
        return 1;
    }

    fprintf(file_ptr, "Name: %sAge: %d\n", name, age);

    fclose(file_ptr);

    printf("\nData was successfully saved to info.txt.\n");

    return 0;
}