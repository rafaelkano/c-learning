#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            printf("%d is divided by 3 or 5\n", i);
            sum += i;
        }

    }
    printf("The sum is %d\n", sum);

    return 0;
}