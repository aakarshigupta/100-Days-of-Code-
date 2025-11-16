#include <stdio.h>

int main() {
    int arr[51];
    int size, i, new_element;
    int insert_index = -1;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements in sorted order:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &new_element);
    for (i = 0; i < size; i++) {
        if (arr[i] > new_element) {
            insert_index = i;
            break;
        }
    }
    if (insert_index == -1) {
        insert_index = size;
    }

    for (i = size; i > insert_index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[insert_index] = new_element;
    size++; 

    printf("\nArray after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}