#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, min;
    printf("Enter 2 numbers: \n");
    printf("N1: ");
    scanf("%d", &num1);
    printf("N2: ");
    scanf("%d", &num2);

    min = (num1 > num2) ? num2 : num1;
    printf("Minimum: %d\n", min);
    return 0;
}