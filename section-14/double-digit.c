#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 1000)
        printf("neither double/triple\n");
    else if(num >= 100)
        printf("triple-digit\n");
    else if (num >= 10)
        printf("double-digit\n");
    else    
        printf("neither double/triple\n");

    return 0;

}