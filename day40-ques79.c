#include <stdio.h>

int main() {
    int size;
    int matrix[10][10];
    int i;

    printf("Enter the size (number of rows/columns) of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMain Diagonal Elements (A[i][i]):\n");
    for (i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("\nSecondary Diagonal Elements (A[i][size - 1 - i]):\n");
    for (i = 0; i < size; i++) {
        printf("%d ", matrix[i][size - 1 - i]);
    }
    printf("\n");

    return 0;
}