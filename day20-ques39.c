#include <stdio.h>

int main() {
    int n, remainder;
    long long product = 1; 
    int found_odd = 0; 

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_n = n;
    int temp_n = n;

    if (temp_n < 0) {
        temp_n = -temp_n;
    }

    if (temp_n == 0) {
        product = 0;
        found_odd = 1; 
    } else {
        while (temp_n > 0) {
            remainder = temp_n % 10;
            if (remainder % 2 != 0) {
                product *= remainder;
                found_odd = 1;
            }
            temp_n /= 10;
        }
    }
    
    printf("\nOriginal number: %d\n", original_n);
    
    if (found_odd) {
        printf("Product of odd digits: %lld\n", product);
    } else {
        printf("No odd digits found. Product is 0.\n");
    }

    return 0;
}