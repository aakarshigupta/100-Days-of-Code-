#include <stdio.h>

int main() {
    int arr[50];
    int size, i, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nMaximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);

    return 0;
}