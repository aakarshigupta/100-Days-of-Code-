#include <stdio.h>

int main() {
    int arr[50];
    int size, i, new_element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &new_element);

    printf("Enter the position (1 to %d) where to insert: ", size + 1);
    scanf("%d", &position);

    int index = position - 1;

    if (index < 0 || index > size) {
        printf("\nInvalid position.\n");
        return 1;
    }

    for (i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = new_element;
    size++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}