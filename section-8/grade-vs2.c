#include <stdio.h>

int main()
{
    int grade1, grade2, grade3;
    double average;

    printf("Enter the 1st grade: ");
    scanf("%d", &grade1);
    printf("Enter the 2nd grade: ");
    scanf("%d", &grade2);
    printf("Enter the 3rd grade: ");
    scanf("%d", &grade3);

    average = (double)(grade1 + grade2 + grade3)/3;
    printf("The average is: %.1lf\n", average);
    return 0;
}