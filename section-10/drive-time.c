#include <stdio.h>

int main()
{
    int distance, speed;
    float min;
    int hours;

    printf("Enter the distance(km): ");
    scanf("%d", &distance);
    printf("Enter the average speed(km/h): ");
    scanf("%d", &speed);

    hours = distance / speed;
    float speedInMinutes = speed/60.0;
    min = (distance % speed)/speedInMinutes;
    printf("Time = %d:%fh\n", hours, min);
    return 0;    
}