#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Enter 2 numbers: \n");
    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);

    if(n1 > n2)
        printf("Maximun: %.2f\nMinumum: %.2f\n", n1,n2);
    else
        printf("Maximun: %.2f\nMinimum: %.2f\n", n2,n1);
    
    return 0;

}