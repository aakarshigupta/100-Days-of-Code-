#include <stdio.h>

void findNextGreaterElement(int arr[], int size) {
    int next_greater[100];
    int i, j;
    int next_val;

    for (i = 0; i < size; i++) {
        next_val = -1;
        
        for (j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                next_val = arr[j];
                break;
            }
        }
        next_greater[i] = next_val;
    }

    printf("Next greater elements (comma separated): ");
    for (i = 0; i < size; i++) {
        printf("%d", next_greater[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 5, 2, 25, 10, 8};
    int size = 6;
    
    printf("Input Array: {4, 5, 2, 25, 10, 8}\n");
    findNextGreaterElement(arr, size);

    int arr2[] = {13, 7, 6, 12};
    size = 4;
    printf("Input Array: {13, 7, 6, 12}\n");
    findNextGreaterElement(arr2, size);

    return 0;
}