// WAP t find the square of a number using function

#include <stdio.h>
#include <math.h>
int square(int a)
{

    printf("%d", pow(a, 2));
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square of %d", n);
    square(n);
}