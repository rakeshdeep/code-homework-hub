// WAP to check the user entered number is Odd or Even
#include<stdio.h>

void main() {
    int n;
    printf("Enter a Number::");
    scanf("%d",&n);
    n % 2 == 0 ? printf("%d is an Even number\n",n) : printf("%d is an Odd Number\n",n);
}
