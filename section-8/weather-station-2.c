#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf("Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32)/1.8;
    printf("Celsius: %.2lf\n", celsius);
    return 0;
}