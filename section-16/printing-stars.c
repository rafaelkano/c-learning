#include <stdio.h>

int main()
{
    int count = 1;
    while(count < 10)
    {
        int i = 0;
        while(i < count)
        {
            printf("*");
            i++;
        }
        printf("\n");
        count++;
    }
    printf("\n");

    return 0;
}