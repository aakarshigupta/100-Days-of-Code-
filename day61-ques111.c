#include <stdio.h>

void firstNegativeInSubarrays(int arr[], int size, int k) {
    int i, j;
    int first_negative;

    if (k <= 0 || k > size) {
        printf("Invalid value of k.\n");
        return;
    }
    
    for (i = 0; i <= size - k; i++) {
        first_negative = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }
        
        printf("%d", first_negative);
        if (i < size - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;
    
    printf("Input Array: {12, -1, -7, 8, -15, 30, 16, 28}\n");
    printf("Subarray size (k): %d\n", k);
    printf("First negative elements: ");
    firstNegativeInSubarrays(arr, size, k);

    return 0;
}