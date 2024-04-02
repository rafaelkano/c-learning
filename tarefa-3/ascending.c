#include <stdio.h>

int main()
{
    int num, n1,n2,n3;
    printf("Enter a 3-digits number: ");
    scanf("%d", &num);

    n1 = num/100;
    n2 = (num % 100) / 10;
    n3 = (num % 100) % 10;

    if(n1 < n2 && n2 < n3)
        printf("ASCENDING\n");
    else
        printf("NOT ASCENDING\n");
        
    return 0;
}