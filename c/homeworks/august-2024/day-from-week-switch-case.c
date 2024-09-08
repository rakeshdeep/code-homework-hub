/*WAP to find a day from week using switch-case */
#include<stdio.h>

void main()
{
    int d;
    printf("Enter a number between 1 to 7: ");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        printf("SUNDAY");break;
    case 2:
        printf("MONDAY");
        break;
    case 3:
        printf("TUESDAY");break;
    case 4:
        printf("WEDNESDAY");break;
    case 5:
        printf("THURSDAY");break;
    case 6:
        printf("FRIDAY");break;
    case 7:
        printf("SATURDAY");break;
    default:
        printf("Enter a valid number between 1 to 7.\n");

    }
}
