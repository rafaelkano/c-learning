#include <stdio.h>

int main()
{
    int num, i=0, even=2;
    printf("Enter a number of even numbers: ");
    scanf("%d", &num);

    do
    {
        printf("%d \n", even);
        even += 2;
        i++;
    } while (i < num);
    return 0;    
}