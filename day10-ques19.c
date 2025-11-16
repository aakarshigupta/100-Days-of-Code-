#include <stdio.h>

int main() {
    float s1, s2, s3;

    printf("Enter the three side lengths of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    printf("\n--- Result ---\n");

    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        printf("The entered side lengths do not form a valid triangle.\n");
    } else if (s1 == s2 && s2 == s3) {
        printf("The triangle is EQUILATERAL (all sides are equal).\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("The triangle is ISOSCELES (two sides are equal).\n");
    } else {
        printf("The triangle is SCALENE (no sides are equal).\n");
    }

    return 0;
}