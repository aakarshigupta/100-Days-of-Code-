#include <stdio.h>

void rotate_right_one(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int arr[50];
    int size, k, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right (k): ");
    scanf("%d", &k);
    
    k = k % size;

    for (i = 0; i < k; i++) {
        rotate_right_one(arr, size);
    }

    printf("\nArray after rotating right by %d positions:\n", k);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}