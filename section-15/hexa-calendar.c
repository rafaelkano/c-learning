#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    printf("Enter a date (dd mm yyyy): \n");
    scanf("%d %d %d", &day, &month, &year);

    printf("Day: 0x%X \nMonth: 0x%X \nYear: 0x%X \n", day, month, year);

}