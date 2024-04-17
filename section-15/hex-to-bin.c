#include <stdio.h>
#include <stdlib.h>

int main()
{
    int character;
    printf("Enter a 1-digit character hexadecimal(0-9 or A-F): ");
    scanf("%X", &character);

    switch(character)
    {
        case 0x0:
            printf("0000\n");
            break;
        case 0x1:
            printf("0001\n");
            break;
        case 0x2:
            printf("0010\n");
            break;
        case 0x3:
            printf("0011\n");
            break;
        case 0x4:
            printf("0100\n");
            break;
        case 0x5:
            printf("0101\n");
            break;
        case 0x6:
            printf("0110\n");
            break;
        case 0x7:
            printf("0111\n");
            break;
        case 0x8:
            printf("1000\n");
            break;
        case 0x9:
            printf("1001\n");
            break;
        case 0xA:
            printf("1010\n");
            break;
        case 0xB:
            printf("1011\n");
            break;
        case 0xC:
            printf("1100\n");
            break;
        case 0xD:
            printf("1101\n");
            break;
        case 0xE:
            printf("1110\n");
            break;
        case 0xF:
            printf("1111\n");
            break;        
    }
    return 0;
}