#include <stdio.h>

int main() {
    int arr[50];
    int size, i, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d) of the element to delete: ", size);
    scanf("%d", &position);

    int index = position - 1;

    if (index < 0 || index >= size) {
        printf("\nInvalid position.\n");
        return 1;
    }
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; 

    printf("\nArray after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}