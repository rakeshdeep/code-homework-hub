#include<stdio.h>

void main()
{
    int n;
    printf("enter a number to check Odd or Even:");
    scanf("%d",&n);
    n % 2 == 0 ? printf("%d is a Even Number.\n",n) : printf("%d is a Odd number.\n",n);
}
