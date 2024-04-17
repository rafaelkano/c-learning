#include <stdio.h>

int main()
{
    int hours = 3;

    for(int i = 0; i < hours; i++)
    {
        printf("Mike worked %d hours\n", i);
        printf("Mike think what to do...\nMike fix some bugs...\nPlus 1h of work\n\n");
        
    }

    printf("After %d hours of work Mike is going home!\n", hours);
    return 0;
}