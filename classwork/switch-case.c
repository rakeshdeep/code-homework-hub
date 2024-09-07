#include<stdio.h>

void main()
{
    char c;
    printf("Enter any first letter of rainbow 'roygbiv'::");
    scanf("%c",&c);
    switch (c)
    {
    case 'r':
        printf("RED");break;
    case 'o':
        printf("ORANGE");
        break;
    case 'y':
        printf("YELLOW");break;
    case 'g':
        printf("GREEN");break;
    case 'b':
        printf("BLUE");break;
    case 'i':
        printf("INDIGO");break;
    case 'v':
        printf("VIOLET");break;
    default:
        printf("Enter a valid char 'r o y g b i v' in small.");

    }
}
