#include <stdio.h>

int main() {
    int arr[50];
    int size, i, target;
    int low, high, mid;
    int found_index = -1;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements in sorted order:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    low = 0;
    high = size - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            found_index = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("\nElement %d found at index %d.\n", target, found_index);
    } else {
        printf("\nElement %d not found in the array.\n", target);
    }

    return 0;
}