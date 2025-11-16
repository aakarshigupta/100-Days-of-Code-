#include <stdio.h>

int main() {
    int arr[50];
    int size, i, target;
    int found_index = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("\nElement %d found at index %d.\n", target, found_index);
    } else {
        printf("\nElement %d not found in the array.\n", target);
    }

    return 0;
}