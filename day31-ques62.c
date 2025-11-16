#include <stdio.h>

int main() {
    int arr[50];
    int size, i, temp;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    printf("\nReversed array:\n");

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}