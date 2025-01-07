// WAP to demonstrate double pointer
#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    int **pp;
    int ***ppp;

    p = &a;
    pp = &p;
    ppp = &pp;

    printf("Value of a: %d\n", a);
    printf("Value of 'a' using single pointer: %d\n", *p);
    printf("Value of 'a' using double pointer: %d\n", **pp);
    printf("Value of 'a' using triple pointer: %d\n", ***ppp);

    return 0;
}