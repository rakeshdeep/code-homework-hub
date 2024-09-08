/*WAP to print the sum of all Odd integer between 1 to 100*/
#include<stdio.h>

void main() {
    int n=1,sum=0;
    while(n<=100){
        sum +=n;
        n +=2;
    }
    printf("Sum of all odd integer between 1 to 100 is=%d",sum);
}