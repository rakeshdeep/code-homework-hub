//Wap to calculate factorial using recursion.
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter a positive number:");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
}