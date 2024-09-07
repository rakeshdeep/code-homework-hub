/*WAP to to find numbers betweeen 1-100 which are exactly divided by 2 & 3 while loop*/
#include <stdio.h>

int main()
{
    int num =0;

    printf("Number which are divisible by 2 & 3 between 1 to 100 is:\n");

    while (num <= 100)
    {
        if(num % 2 == 0 && num % 3 == 0)
            printf("%d\n", num);
        num += 1;
    }
    return 0;
}
