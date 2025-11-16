#include <stdio.h>

int findCell(int arr[], int size, int x) {
    int low = 0;
    int high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {10, 20, 30, 30, 40, 50};
    int x = 35;
    int size = 6;
    int cell_index;

    cell_index = findCell(arr, size, x);

    printf("Array: {10, 20, 30, 30, 40, 50}\n");
    printf("Target x: %d\n", x);
    printf("Index of the cell of %d: %d\n", x, cell_index);

    return 0;
}