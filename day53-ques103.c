#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    if (size == 0) return -1;
    
    long long total_sum = 0;
    long long left_sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        total_sum += arr[i];
    }
    for (i = 0; i < size; i++) {        
        long long right_sum = total_sum - left_sum - arr[i];

        if (left_sum == right_sum) {
            return i;
        }
        left_sum += arr[i];
    }

    return -1;
}

int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int size = 6;
    int pivot_index;

    pivot_index = findPivotIndex(nums, size);

    printf("Array: {1, 7, 3, 6, 5, 6}\n");
    printf("The leftmost pivot index is: %d\n", pivot_index);
    
    int nums2[] = {1, 2, 3};
    size = 3;
    pivot_index = findPivotIndex(nums2, size);
    printf("Array: {1, 2, 3}\n");
    printf("The leftmost pivot index is: %d\n", pivot_index);
    
    int nums3[] = {2, 1, -1};
    size = 3;
    pivot_index = findPivotIndex(nums3, size);
    printf("Array: {2, 1, -1}\n");
    printf("The leftmost pivot index is: %d\n", pivot_index);

    return 0;
}