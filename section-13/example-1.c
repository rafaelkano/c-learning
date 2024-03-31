#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money, grade;
    printf("Enter money and grade: \n");
    printf("Money: ");
    scanf("%d", &money);
    printf("Grade: ");
    scanf("%d", &grade);

    if(money < 50 && grade > 90)
        printf("Ask money...\n");
    else    
        printf("Can't ask!\n");
    
    return 0;
}