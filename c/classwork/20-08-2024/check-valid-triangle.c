//Check whether a triangle is valid or not.
#include<stdio.h>

void main()
{
    float a1,a2,a3,sum;
    printf("Enter three angle of your triangle a1, a2, a3 ::");
    scanf("%f %f %f",&a1,&a2,&a3);
    sum = a1 + a2 + a3;
    if(sum == 180.0 && ((a1 && a2 && a3 )!= 0 ))
    {
        printf("Triangle is possible\n");
    }
    else
    {
        printf("Triangle is not possible\n");
    }
}
