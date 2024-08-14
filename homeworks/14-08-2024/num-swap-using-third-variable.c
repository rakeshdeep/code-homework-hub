//WAP to swap two numbers using third variable.
#include<stdio.h>

void main()
{

    int a,b, temp;
    printf("Enter 2 numbers::");
    scanf("%d %d",&a, &b);
    printf("Before swap a=%d and b=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap a=%d and b=%d\n", a,b);

}
