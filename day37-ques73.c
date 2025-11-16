#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int row_sums[10];
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }

    printf("\nRow Sums stored in the array:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, row_sums[i]);
    }

    return 0;
}