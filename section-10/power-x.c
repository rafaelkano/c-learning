#include <stdio.h>

int main()
{
    int x, x2, x4, x6, x8;
    printf("Enter the value of X: ");
    scanf("%d", &x);

    x2 = x*x;
    x4 = x*x*x*x;
    x6 = x*x*x*x*x*x;
    x8 = x*x*x*x*x*x*x*x;

    printf("x = %d\n", x);
    printf("x² = %d\n", x2);
    printf("x⁴ = %d\n", x4);
    printf("x⁶ = %d\n", x6);
    printf("x⁸ = %d\n", x8);
    return 0;
}