#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(i == num)
            printf("%d\n", i);
        else    
            printf("%d, ", i);
    }
    for(int i = num; i > 0; i--)
    {
        if(i == 1)
            printf("%d\n", i);
        else
            printf("%d, ", i);
    }
    return 0;
}