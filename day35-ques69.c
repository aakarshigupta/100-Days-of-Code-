#include <stdio.h>
#include <limits.h>

int main() {
    int arr[50];
    int size, i;
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("\nArray must have at least two elements.\n");
        return 1;
    }

    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("\nAll elements are the same or not enough distinct elements.\n");
    } else {
        printf("\nThe second largest element is: %d\n", second_largest);
    }

    return 0;
}