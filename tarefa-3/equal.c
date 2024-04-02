#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);

    if(n1 == n2)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    
    return 0;
}