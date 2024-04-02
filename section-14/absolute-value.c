#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0)
        printf("|%d|\n", num);
    else
        printf("|%d|\n", -num);
    
    return 0;
}