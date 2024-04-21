#include <stdio.h>

int main()
{
    int cent=1;
    printf("Day 1 - $ %.2f \n", (float)cent/100);
    for(int i=1; i <= 30; i++)
    {
        cent *= 2;
        printf("Day %d - $ %.2f \n", i+1, (float)cent/100);
    }

    printf("Total Cash = $ %d\n", cent/100);
    return 0;
}