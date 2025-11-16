#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int i, j;
    int is_symmetric = 1; 

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("\nThe matrix is NOT symmetric (it is not square).\n");
        return 0;
    }

    printf("Enter the elements of the square matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    printf("\nResult:\n");
    if (is_symmetric) {
        printf("The matrix is SYMMETRIC.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}