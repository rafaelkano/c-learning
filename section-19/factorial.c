#include <stdio.h>

/*
    Write a function that:
    1. Receives a number;
    2. Calculates its factorial;
    3. Returns the result.
*/

long int calculateFactorial(int n);

int main()
{
    int number;
    long int finalFactorial;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial(%d) = ", number);
    finalFactorial = calculateFactorial(number);
    printf("%ld\n", finalFactorial);


    return 0;
}

long int calculateFactorial(int n)
{
    long int factorial = 1;
    for(int i = 1; i <= n; i++)
    {
        if(i == n)
            printf("%d = ", i);
        else
            printf("%d * ", i);
        factorial *= i;
    }
    return factorial;
}

