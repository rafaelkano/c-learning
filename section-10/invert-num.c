#include <stdio.h>

int main()
{
    int num, dig1,dig2, dig3;
    printf("Enter a 3-digits number: ");
    scanf("%d", &num);

    dig1 = num % 10;
    dig3 = num / 100;
    dig2 = (num % 100) / 10;

    printf("%d%d%d\n", dig1,dig2,dig3);
    return 0; 
}