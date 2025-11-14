#include <stdio.h>

int main() {
    int percentage;

    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("\nInvalid Input: Percentage must be between 0 and 100.\n");
    } else if (percentage >= 90) {
        printf("\nGrade assigned: Grade A\n");
    } else if (percentage >= 80) {
        printf("\nGrade assigned: Grade B\n");
    } else if (percentage >= 70) {
        printf("\nGrade assigned: Grade C\n");
    } else if (percentage >= 60) {
        printf("\nGrade assigned: Grade D\n");
    } else {
        printf("\nGrade assigned: Grade F\n");
    }

    return 0;
}