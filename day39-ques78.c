#include <stdio.h>

int main() {
    int size;
    int matrix[10][10];
    int i;
    int sum = 0;

    printf("Enter the size (number of rows/columns) of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("\nSum of the main diagonal elements is: %d\n", sum);

    return 0;
}