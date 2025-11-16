#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged_arr[100];
    int size1, size2, merged_size, i;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    merged_size = size1 + size2;
    for (i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }

    for (i = 0; i < size2; i++) {
        merged_arr[size1 + i] = arr2[i];
    }

    printf("\nMerged array:\n");
    for (i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}