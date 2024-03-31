#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    int num1, num2, result;

    printf("Enter a mathematical operator (+, -, *, /, %%): ");
    scanf("%c", &operation);
    printf("Enter 2 numbers: \n");
    printf("N1: ");
    scanf("%d", &num1);
    printf("N2: ");
    scanf("%d", &num2);

    switch(operation)
    {
        case '+':
            result = (num1 + num2);
            break;
        case '-':
            result = (num1 - num2);
            break;
        case '*':
            result = (num1 * num2);
            break;
        case '/':
            if(num2 == 0)
                printf("You cannot divide by 0! \n");
            else
                result = (num1 / num2);
            break;
        case '%':
            if(num2 == 0)
                printf("You cannot divide by 0! \n");
            else
                result = (num1 % num2);
            break;  
        default:
            printf("Wrong mathematical operation.. try again!\n");      
    }

    printf("%d %c %d = %d\n", num1, operation, num2, result);
    return 0;
    
}