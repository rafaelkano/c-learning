#include <stdio.h>

int main()
{
    int d1,d2,d3,d4,decimal;
    printf("Enter a 4 bits binary number (1 1 1 1): \n");
    scanf("%d %d %d %d", &d1,&d2,&d3,&d4);

    decimal = (d1 * 2*2*2) + (d2 * 2*2) + (d3 * 2) + (d4 * 1);
    printf("%d %d %d %d = %d\n",d1,d2,d3,d4,decimal);
    return 0;
}