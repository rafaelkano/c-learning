#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);


    if(character >= 48 && character <= 57)
        printf("The character %c is a digit\n", character);
    else if(character >= 65 && character <= 90)
        printf("The character %c is a Upper Case letter\n", character);
    
    else if(character >= 97 && character <= 122)
        printf("The character %c is a Lower Case letter\n", character);
    else
        printf("The character %c is other option\n", character);
    
    return 0;

}