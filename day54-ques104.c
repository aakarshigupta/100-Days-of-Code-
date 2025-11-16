#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    long long total_sum;
    long long discriminant;

    printf("Enter a positive integer n: ");
    scanf("%lld", &n);
    total_sum = n * (n + 1) / 2;
    discriminant = total_sum;
    long long root = round(sqrt(discriminant));

    if (root * root == discriminant) {
        printf("\nThe pivot integer x is: %lld\n", root);
    } else {
        printf("\nNo such pivot integer exists: -1\n");
    }

    return 0;
}