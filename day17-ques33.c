#include <stdio.h>
#include <math.h> 

int main() {
    int num, original_num, remainder, sum = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    int temp_num = num;
    while (temp_num != 0) {
        temp_num /= 10;
        digits++;
    }

    temp_num = num;
    while (temp_num != 0) {
        remainder = temp_num % 10;
        sum += (int)pow(remainder, digits); 
        temp_num /= 10;
    }

    printf("\nOriginal number: %d\n", original_num);

    if (sum == original_num) {
        printf("Result: %d is an ARMSTRONG number.\n", original_num);
    } else {
        printf("Result: %d is NOT an Armstrong number.\n", original_num);
    }

    return 0;
}