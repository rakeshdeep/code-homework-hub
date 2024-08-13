//WAP a program to get the sum of the first and last digit of a 4 digit number.
#include<stdio.h>

void main()
{
    int n,last,first,sum;
    printf("Enter a 4 digit number::");
    scanf("%d",&n);
    if(n >= 1000 && n < 10000)
    {
        printf("Your Entered Number is: %d\n",n);
        first = n / 1000;
        last = n % 10;
        sum = first + last;
        printf("first digit: %d\nlast digit: %d\nSum :%d",first,last,sum);

    }
    else
    {
        printf("Your Enter number is not a 4 digit number.. (-_-)\n");
    }

}
