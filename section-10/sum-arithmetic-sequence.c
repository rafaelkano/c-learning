#include <stdio.h>

int main()
{
    int n, d, a1, an;
    double sum;

    printf("Enter the 1st number: ");
    scanf("%d", &a1);
    printf("Enter the difference: ");
    scanf("%d", &d);
    printf("Enter the N-th number: ");
    scanf("%d", &n);

    an = a1 + (n-1)*d;
    sum = (a1 + an) * ((double)n / 2);

    printf("The N-th number = %d\n", an);
    printf("The sum of the arithmetic sequence is: %.2lf\n", sum);
    return 0;
}