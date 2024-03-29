#include <stdio.h>

int main()
{
    float box_a, box_b, temp;
    box_a = 10;
    box_b = 20;

    printf("Box A: %f\n", box_a);
    printf("Box B: %f\n", box_b);
    printf("Swap\n");

    temp = box_a;
    box_a = box_b;
    box_b = temp;

    printf("Box A: %f\n", box_a);
    printf("Box B: %f\n", box_b);
    return 0;
}