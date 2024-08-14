// WAP to find greatest among 3 number using ternary operator.
#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 3 number a,b & c respectively::");
    scanf("%d %d %d",&a, &b, &c);
    (a > b) ? ((a > c) ? printf("A") : printf("C")) : ((b > c) ? printf("B") : printf("C"));
}
