#include <stdio.h>

int main()
{
    double height;
    double width;
    double area;

    printf("Insert the rectangle height: ");
    scanf("%lf", &height);
    printf("Insert the rectangle width: ");
    scanf("%lf", &width);

    area = height * width;
    printf("The area of the rectangle is: %lf\n", area);
}