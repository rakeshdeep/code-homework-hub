// WAP to print odd even number using function.

#include<stdio.h>
int isEven(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}

void main(){
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    isEven(x) ? printf("%d is Even Number",x) : printf("%d is Odd Number.",x);
}