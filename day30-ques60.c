#include <stdio.h>

int main() {
    int arr[50];
    int size, i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("\nTotal Positive elements: %d\n", positive_count);
    printf("Total Negative elements: %d\n", negative_count);
    printf("Total Zero elements: %d\n", zero_count);

    return 0;
}