#include <stdio.h>

int main()
{
    float height, width, perimeter;
    printf("Insert the height: ");
    scanf("%f", &height);
    printf("Insert the width: ");
    scanf("%f", &width);

    perimeter = (height*2) + (width*2);
    printf("The perimeter of this rectangle is: %f\n", perimeter);
    return 0;
}