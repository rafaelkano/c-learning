#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &n1,&n2);

    if(n1 == n2)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}