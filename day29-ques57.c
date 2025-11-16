#include <stdio.h>

int main() {
    int arr[50];
    int size, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("\nSum of array elements is: %d\n", sum);

    return 0;
}