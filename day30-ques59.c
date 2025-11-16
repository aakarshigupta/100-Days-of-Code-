#include <stdio.h>

int main() {
    int arr[50];
    int size, i, even_count = 0, odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nTotal Even numbers: %d\n", even_count);
    printf("Total Odd numbers: %d\n", odd_count);

    return 0;
}