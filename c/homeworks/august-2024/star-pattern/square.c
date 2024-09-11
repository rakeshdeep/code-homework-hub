/*WAP to generate a square shape*/
#include<stdio.h>

void main()
{
    int a;
    printf("Enter value for Side a: ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
