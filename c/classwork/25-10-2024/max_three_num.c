// WAP to find maximum of three number using function;
#include <stdio.h>
int maximum(int a, int b, int c)
{
    (a > b) ? ((a > c) ? printf("%d is maximum",a) : printf("%d is maximum",c)) : ((b > c) ? printf("%d is maximum",b) : printf("%d is maximum",c));
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
    maximum(a,b,c);
}