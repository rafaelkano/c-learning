#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("%d\n", a);
    printf("%d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;    
}