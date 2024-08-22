// calculate the ratio of two int number if the ratio is greater then 0 then swap the number using 3rd variable.

#include<stdio.h>

void main()
{
    int a,b,r,temp;
    printf("Enter two number a and b ::");
    scanf("%d %d",&a,&b);
    r= a/b;
    if(r>0)
    {
        printf("Before Swap a=%d, b=%d \n",a,b);
        temp=a;
        a=b;
        b=temp;
        printf("After Swap a=%d, b=%d \n",a,b);

    }
    else
        printf("Ratio of a/b = %d/%d = %d",a,b,r);
}
