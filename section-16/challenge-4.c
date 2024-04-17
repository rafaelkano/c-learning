#include <stdio.h>

/*
    Write a program that receives as input two values:
        1. number
        2. pow

    The program should calculate the result of: num ^ pow and print the result
    to the screen.
*/

int main()
{
    int num, pow, result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pow);

    for(int i=0; i < pow; i++)
    {
        result *= num;
    }
    printf("%d ^ %d = %d\n", num, pow, result);
    return 0;
}