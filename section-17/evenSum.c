#include <stdio.h>

int main()
{
    int num, evenDigitsSum=0, oddDigitsSum=0,divisor, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    divisor = num;

    do
    {
        remainder = divisor % 10;
        divisor = divisor / 10;
 
        if(remainder % 2 == 0)
            evenDigitsSum += remainder;
        else
            oddDigitsSum += remainder;

    } while (divisor > 0);

    printf("The sum of the even digits is: %d; and the sum of the odd digits is: %d\n", evenDigitsSum, oddDigitsSum);

    return 0;
    
}