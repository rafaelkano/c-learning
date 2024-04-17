#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of asterisks: ");
    scanf("%d", &num);

    while(num > 0)
    {
        printf("*");
        num--;
    }
    printf("\n");
    return 0; 
}