#include <stdio.h>

int main()
{
    int price, totalPrice = 0;
    printf("Please enter a price: ");
    scanf("%d", &price);

    while(price != 0)
    {
        totalPrice += price;
        printf("Please enter a price: ");
        scanf("%d", &price);
    }

    printf("Total Order Price = %d \n" , totalPrice);
    return 0;
}