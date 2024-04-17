#include <stdio.h>

int main()
{
    int num, pow, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pow);

    result = 1;
    int i = 0;
    while(i < pow)
    {
        result *= num;
        i++;
    }
    printf("%d ^ %d = %d\n", num, pow, result);
    return 0; 
}