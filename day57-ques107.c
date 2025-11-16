#include <stdio.h>

void findPreviousGreaterElement(int arr[], int size) {
    int previous_greater[100];
    int i, j;
    int previous_val;

    for (i = 0; i < size; i++) {
        previous_val = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous_val = arr[j];
                break;
            }
        }
        previous_greater[i] = previous_val;
    }

    printf("Previous greater elements (comma separated): ");
    for (i = 0; i < size; i++) {
        printf("%d", previous_greater[i]);
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
    findPreviousGreaterElement(arr, size);

    int arr2[] = {13, 7, 6, 12};
    size = 4;
    printf("Input Array: {13, 7, 6, 12}\n");
    findPreviousGreaterElement(arr2, size);

    return 0;
}