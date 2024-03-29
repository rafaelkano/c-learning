#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    double x1,y1, x2, y2;
    double distance;

    printf("Enter X1: ");
    scanf("%lf", &x1);
    printf("Enter Y1: ");
    scanf("%lf", &y1);
    printf("Enter X2: ");
    scanf("%lf", &x2);
    printf("Enter Y2: ");
    scanf("%lf", &y2);

    distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    printf("The distance of Point 1 to Point 2 is: %lf\n", distance);
    return 0;
}