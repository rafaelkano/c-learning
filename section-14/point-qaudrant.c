#include <stdio.h>

int main()
{
    int x, y, quadrant;
    printf("Enter the coordinates of a point (x, y): \n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    if(x > 0 && y > 0)
        quadrant = 1;
    else if(x > 0 && y < 0)
        quadrant = 4;
    else if(x < 0 && y > 0)
        quadrant = 2;
    else if(x < 0 && y < 0) 
        quadrant = 3;
    
    printf("Point (%d, %d) -> Quadrant %d\n", x,y,quadrant);
    return 0;
}