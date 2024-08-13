//WAP to sift the last digit of a 3 digit number to the first...
#include<stdio.h>

void main()
{
    int num,o,rem,result;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    if(num >= 100 && num < 1000)
    {
        printf("number is %d\n",num);
        o = num % 10;
        rem = num / 10;
        result = o * 100 + rem;
        printf("after sifting the digit %d\n",result);
    }
    else
    {
        printf("Your entered number is not of 3 digit (-_-)");
    }
}
