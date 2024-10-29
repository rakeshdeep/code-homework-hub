// WAP to SWAP two number using function;
#include <stdio.h>
int swap(int a, int b){
    printf("Your Entered value is\nA=%d\nB=%d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swap value is\nA=%d\nB=%d\n",a,b);
}

void main()
{
    int x,y;
printf("Enter two number x and  y :");
scanf("%d %d", &x, &y);
    swap(x,y);
}