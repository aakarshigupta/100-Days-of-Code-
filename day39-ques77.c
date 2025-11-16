#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int i, j;
    int is_distinct = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("\nMatrix must be square to check the main diagonal.\n");
        return 1;
    }

    printf("Enter the elements of the square matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = 0;
                break;
            }
        }
        if (!is_distinct) {
            break;
        }
    }

    printf("\nResult:\n");
    if (is_distinct) {
        printf("The main diagonal elements are DISTINCT.\n");
    } else {
        printf("The main diagonal elements are NOT distinct.\n");
    }

    return 0;
}