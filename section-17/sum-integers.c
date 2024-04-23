#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        sum += i;        
        if(i == num)
            printf("%d = %d\n", i, sum);
        else
            printf("%d + ", i);
    }

    return 0;

}