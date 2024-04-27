#include <stdio.h>
#include <stdlib.h>

void printMaxAndMin(int n1, int n2);

int main()
{
    printMaxAndMin(3,5);
    return 0;
}

void printMaxAndMin(int n1, int n2)
{
    if(n1 > n2)
    {
        printf("Max: %d\n", n1);
        printf("Min: %d\n", n2);
    }
    else if(n2 > n1)
    {
        printf("Max: %d\n", n2);
        printf("Min: %d\n", n1);       
    }
    else
        printf("The two numbers are equals!\n");
}

        