// WAP to swap two number entered by user..
#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter value for A:");
    scanf("%d",&a);
    printf("Enter value for B:");
    scanf("%d",&b);
    printf("Your Entered value is\nA=%d\nB=%d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swap value is\nA=%d\nB=%d\n",a,b);
}
