#include <stdio.h>

int power(int a, int b)
{
    if (b == 1)
        return a;
    else
        return a * power(a, b - 1);
}

void main()
{

    int x, y;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Enter power of the Number:");
    scanf("%d", &y);
    printf("%d to the power %d is %d", x, y, power(x, y));
}