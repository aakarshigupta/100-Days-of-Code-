#include <stdio.h>

int main() {
    int arr[10];
    int size = 10;
    int i;

    printf("Enter %d integer elements for the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements of the array are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}