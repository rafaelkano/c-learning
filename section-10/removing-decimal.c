#include <stdio.h>

int main()
{
    float data, decimal;
    int integer;

    printf("Enter a floating number: ");
    scanf("%f", &data);

    integer = (int)data;
    decimal = data - integer;
    printf("Data: %f\nInteger part: %d\nDecimal part: %f\n", data, integer, decimal);
    return 0;
}