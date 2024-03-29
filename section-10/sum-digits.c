#include <stdio.h>

int main()
{
    int number,sum, remainder_1;
    printf("Enter a 3 digits number: ");
    scanf("%d", &number);
    sum = number / 100;
    remainder_1 = number % 100;
    sum = sum + (remainder_1 / 10);
    sum = sum + (remainder_1 % 10);
    printf("the sum of the digits is: %d\n", sum);
    return 0;
}