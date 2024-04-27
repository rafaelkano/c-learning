#include <stdio.h>

float calculateAverage(int grade1, int grade2, int grade3);

int main()
{
    int grade1, grade2, grade3;
    float finalAverage;
    printf("Enter the grade 1: ");
    scanf("%d", &grade1);
    printf("Enter the grade 2: ");
    scanf("%d", &grade2);
    printf("Enter the grade 3: ");
    scanf("%d", &grade3);  

    finalAverage = calculateAverage(grade1, grade2, grade3);
    printf("The final average is: %.2f\n", finalAverage);
    return 0;
}

float calculateAverage(int grade1, int grade2, int grade3)
{
    float average;
    average = (float)(grade1 + grade2 + grade3) / 3;
    return average;
}