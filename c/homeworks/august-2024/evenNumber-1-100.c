/*WAP to print Even number between 1- 100 using while loop in c*/
#include <stdio.h>

int main()
{
    int num = 2;

    printf("Even numbers between 1 and 100 are:\n");

    while (num <= 100)
    {
        printf("%d\n", num);
        num += 2;
    }

    printf("\n");
    return 0;
}
