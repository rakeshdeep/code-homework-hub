/*WAP to display fibonacci series using FOR loop*/

#include<stdio.h>

void main()
{
    int a=0,b=1,t,n;
    printf("Enter a number upto you want fibonacci series::");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0; i<n-2; i++)
    {
        t = a+b;
        a=b;
        b=t;
        printf("%d\n",t);
    }

}
