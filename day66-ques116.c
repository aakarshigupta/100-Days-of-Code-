#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;
    int i, j;
    int index1 = -1;
    int index2 = -1;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                index1 = i;
                index2 = j;
                goto found;
            }
        }
    }

found:
    printf("Input Array: {2, 7, 11, 15}, Target: %d\n", target);
    printf("Indices: %d %d\n", index1, index2);

    return 0;
}