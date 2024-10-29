/* Write a program to generate a series: X/1! + X^2/2! + X^3/3! + ... + X^n/n!  */

#include <stdio.h>
#include <math.h>

void main()
{
    int n, i;
    float x, sum = 0.0, term;
    int factorial = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
        term = pow(x, i) / factorial;
        sum += term;
        printf("%.2f\n",term);
    }
    // printf("The sum of the series is: %.4f\n", sum);
}
