#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max,min;

    printf("Enter 3 numbers: \n");
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);
    
    max = n1;
    min = n2;

    if(n1 < n2)
    {
        max = n2;
        min = n1;

    }
    if(n3 > max)
    {
        max = n3;
    }
    if(n3 < min)
        min = n3;
    
    printf("Maximum: %d\nMinimum: %d\n", max,min);
    return 0;
}