#include <stdio.h>

int maxDigit(int num);

int main()
{
    int num, max;
    printf("Enter a 2-digits number: ");
    scanf("%d", &num);

    max = maxDigit(num);
    if(max == 10)
        printf("Error! Not 2-digits number\n");
    else    
        printf("Maximum digit = %d\n", max);

    return 0;
}

int maxDigit(int num)
{
    int quotient, remainder;

    if(num > 99 || num < 10)
        return 10;

    quotient = num / 10;
    remainder = num % 10;

    if(quotient > remainder)
        return quotient;
    else
        return remainder;
}