#include <stdio.h>

/*
    Write a program that receives as input a "valid" grade:
        1. Greater than 0;
        2. Less than 100.
    
    The program should print a corresponding message with the grade itself
*/

int main()
{
    int grade;

    do
    {
        printf("Enter a valid grade (0 < grade < 100): ");
        scanf("%d", &grade);
    } while (grade <= 0 || grade >= 100);

    printf("Thanks! You've inserted %d, which is a legit grade! \n", grade);
    return 0;    
}