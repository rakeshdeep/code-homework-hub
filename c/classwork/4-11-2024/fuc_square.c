// WAP t find the square of a number using function

#include <stdio.h>
int square(int a)
{

    printf("%d", a*a);
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square of %d is ", n);
    square(n);
}