/*WAP to print the sum of each digit of a 3 digit number using FOR loop*/

#include<stdio.h>

void main() {
    int n,r,temp,sum=0;
    printf("Enter a 3 digit Number::");
    scanf("%d",&n);
    temp = n;

    for(; n!=0; n/=10){
        r= n % 10; 
        sum +=r;
    }
    printf("Sum Of Each digit of %d is %d",temp,sum );
}