#include <stdio.h>

int main()
{
    int year;
    int age;
    printf("Current year: ");
    scanf("%d", &year);

    printf("Your age: ");
    scanf("%d", &age);

    printf("Your birth year is: %d\n", year-age);
}