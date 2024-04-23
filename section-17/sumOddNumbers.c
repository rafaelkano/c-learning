#include <stdio.h>

int main()
{
    int num, currentValue, sumOdd=0;
    printf("Enter the number of values in sequence: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        printf("Enter the value n%d: ", i);
        scanf("%d", &currentValue);

        if(currentValue % 2 != 0)
            sumOdd += currentValue;
    }

    printf("The sum of odd values is: %d\n", sumOdd);

    return 0;
}