#include <stdio.h>

int main()
{
    int n, a1, d;

    printf("Enter 1st number: ");
    scanf("%d", &a1);
    printf("Enter the difference: ");
    scanf("%d", &d);
    printf("Enter the Nth number: ");
    scanf("%d", &n);

    n = a1 + (n-1)*d;

    printf("The Nth number is: %d\n", n);
    return 0;
}