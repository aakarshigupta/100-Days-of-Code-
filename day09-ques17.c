#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("\nRoots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (D == 0) {
        root1 = -b / (2 * a);
        printf("\nRoots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else { // D < 0
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("\nRoots are Complex (Imaginary).\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}