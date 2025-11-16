#include <stdio.h>

int findRepeatedElement(int arr[], int size) {
    int xor_sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        xor_sum ^= arr[i];
    }
    
    int n = size - 1;
    for (i = 1; i <= n; i++) {
        xor_sum ^= i;
    }

    return xor_sum;
}

int main() {
    int nums[] = {1, 3, 4, 2, 2}; 
    int size = 5;
    
    printf("Input Array: {1, 3, 4, 2, 2}\n");
    printf("The repeated element is: %d\n", findRepeatedElement(nums, size));
    
    return 0;
}