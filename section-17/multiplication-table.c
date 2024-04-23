#include <stdio.h>

int main()
{
    int num, multiplicator;
    int mult = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a multiplicator: ");
    scanf("%d", &multiplicator);

    for(int i = 0; i <= multiplicator; i++)
    {
        mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);
    }

    return 0;
}