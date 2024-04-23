#include <stdio.h>

int main()
{
    int size = 0, num, previousNum = 0, ascending = 1;

    do
    {
        printf("Enter the size of the sequence (Greater than 0): ");
        scanf("%d", &size);
    } while (size <= 0);
    

    for(int i = 1; i <= size; i++)
    {
        do
        {
            printf("N%d (positive number): ", i);
            scanf("%d", &num);
        }while(num < 0);

        if(num > previousNum)
            previousNum = num;
        else    
        {
            previousNum = num;
            ascending = 0;
            break;
        }
    }
    if(!ascending)
        printf("NOT Very Ascending!\n");
    else    
        printf("Very Ascending!\n");
    
    return 0;
}