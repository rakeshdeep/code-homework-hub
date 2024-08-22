// WAP a program to check greatest number among 3 number using nested IF

#include<stdio.h>

void main ()
{
    int a,b,c;
    printf("Enter three number a, b, c resp. ::");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b)
    {
        if(a>c)
            printf("A greatest");
    }
    else if (b>c)
        printf("B greatest");
    else
        printf("C greatesr");
}
