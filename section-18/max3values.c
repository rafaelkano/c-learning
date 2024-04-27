#include <stdio.h>

int maxValue();

int main()
{
    int max;
    max = maxValue();
    printf("Maximun: %d\n", max);

    return 0;
}

int maxValue()
{
    int num1, num2, num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);

    if(num1 > num2)
        if(num1 > num3)
            return num1;
        else
            return num3;
    else if(num2 > num3)
        return num2;
    else
        return num3;
}