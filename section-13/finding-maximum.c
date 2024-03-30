#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Insert 2 numbers\n");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    if (n1>n2)
        printf("The greater number is %d\n", n1);
    else
        printf("The greater number is %d\n", n2);
    
    return 0;
}