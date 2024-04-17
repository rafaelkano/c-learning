#include <stdio.h>

int main()
{
    int num, pow;
    int result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pow);


    for(int i = 1; i < pow; i++)
    {
        if(i==1)
            result = num * num;
        else
            result *= num;
    }
    printf("%d ^ %d = %d\n", num, pow, result);
}