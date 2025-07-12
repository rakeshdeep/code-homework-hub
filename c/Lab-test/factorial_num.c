// WAP to generate Factorial of a number using resursion
#include <stdio.h>

int Factorial(int n)
{
    if (n == 1)
        return 1;
    else if (n < 0)
        return 0;
    else
        return n * Factorial(n - 1);
}

void main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    Factorial(n) ? printf("Factorial of %d is %d", n, Factorial(n)) : printf("Null");
}
