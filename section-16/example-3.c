#include <stdio.h>

int main()
{
    int price, totalPrice = 0;

    do
    {
        printf("Please enter a price: ");
        scanf("%d", &price);
        totalPrice += price;
    } while (price != 0);
    
    printf("Total Order Price = %d \n", totalPrice);
    return 0;
}