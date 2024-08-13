// WAP to calculate the perimeter of a rectange taking user input for length and breadth.
#include<stdio.h>

void main()
{
    int l,b, perimeter;
    printf("Enter value for length and breadth ::");
    scanf("%d %d",&l, &b);
    perimeter = 2*(l + b);
    printf("Perimeter of rectangle with l=%d, b=%d is %d \n",l,b,perimeter);

}
