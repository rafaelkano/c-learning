#include <stdio.h>

float calculateRectangleArea(float height, float width);

int main()
{
    float w, h, finalArea;
    printf("Enter the height of the rectangle: ");
    scanf("%f", &h);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);

    finalArea = calculateRectangleArea(h, w);
    printf("The area of the rectangle is: %.2f m²\n", finalArea);

    return 0;
}

float calculateRectangleArea(float height, float width)
{
    float area;
    area = height * width;
    return area;
}
