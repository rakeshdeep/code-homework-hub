// WAP to find minimum of three number using function;
#include <stdio.h>
int minimum(int a, int b, int c)
{
    (a < b) ? ((a < c) ? printf("%d is minimum",a) : printf("%d is minimum",c)) : ((b < c) ? printf("%d is minimum",b) : printf("%d is minimum",c));
}
void main()
{
    int a, b, c;
    printf("ENter a:");
    scanf("%d", &a);
    printf("ENter b:");
    scanf("%d", &b);
    printf("ENter c:");
    scanf("%d", &c);
    minimum(a,b,c);
}