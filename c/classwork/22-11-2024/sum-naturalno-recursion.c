// Wap to calculate the sum of n natural number using recursion
#include <stdio.h>
int sumnatural(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumnatural(n - 1);
    }
}
int main()
{
    int n;
    printf("Entera positive number::");
    scanf("%d", &n);
    printf("Sum of first %d natural number is: %d\n", n, sumnatural(n));
    return 0;
}