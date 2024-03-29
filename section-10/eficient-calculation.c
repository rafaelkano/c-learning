#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x2, x4, x6, x8;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    x2 = x*x;
    x4 = x2*x2;
    x6 = x2*x4;
    x8 = x4*x4;
    printf("x² = %d\n", x2);
    printf("x⁴ = %d\n", x4);
    printf("x⁶ = %d\n", x6);
    printf("x⁸ = %d\n", x8);

    return 0;

}