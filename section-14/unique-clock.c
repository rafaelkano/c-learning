#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalSeconds, hours, minutes, seconds, remainderSeconds;
    printf("Enter the total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    remainderSeconds = totalSeconds % 3600;
    minutes = remainderSeconds / 60;
    seconds = remainderSeconds % 60;

    if(hours < 10)
        printf("0");
    printf("%d : ",hours);

    if(minutes < 10)
        printf("0");
    printf("%d : ", minutes);

    if(seconds < 10)
        printf("0");
    printf("%d \n", seconds);
    
    // printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}