#include <stdio.h>

int main()
{
    int rows, num = 1;
    printf("Enter a number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 0; j < (rows - i); j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}