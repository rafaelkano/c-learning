#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf("Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 1.8 + 32;
    printf("Fahrenheit: %.2lf\n", fahrenheit);
    return 0;
}