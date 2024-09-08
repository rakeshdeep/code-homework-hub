/*WAP to Check whether the given character is a Vowel or not using switch-case */
#include<stdio.h>

void main()
{
    char v;
    printf("Enter a char. to check Vowel::");
    scanf("%c",&v);
    switch (v)
    {
    case 'a':
        printf("You Entered Vowel 'a'");break;
    case 'e':
        printf("You Entered Vowel 'e'");break;
    case 'i':
        printf("You Entered Vowel 'i'");break;
    case 'o':
        printf("You Entered Vowel 'o'");break;
    case 'u':
        printf("You Entered Vowel 'u'");break;
    default:
        printf("Not a Vowel.\n");

    }
}
