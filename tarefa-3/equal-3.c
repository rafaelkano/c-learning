#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Enter 3 numbers: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 == n2 && n2 == n3)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    
    return 0;
}