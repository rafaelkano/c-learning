#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=0; i <= num; i+=15)
    {
        printf("%d can be divided by 3 and 5\n", i);
        sum += i;
    }
    printf("The sum of all numbers from 1 to %d divided by 3 and 5 is: %d\n", num, sum);

    return 0;
}