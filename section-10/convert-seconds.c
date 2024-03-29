#include <stdio.h>

int main()
{
    int seconds, minutes, hours, remainder1, remainingSeconds;

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    hours = (seconds / 3600);
    remainder1 = seconds % 3600;
    minutes = remainder1 / 60;
    remainingSeconds = (remainder1 % 60);

    printf("Hours: %d, minutes: %d, seconds: %d\n", hours, minutes, remainingSeconds);
    return 0;

}