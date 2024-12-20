#include<stdio.h>
#include<math.h>

int binToDec(long long b){
    int d = 0; 
    int i = 0;
    int rem;

    while (b!=0)
    {
        rem = b % 10;
        d += rem * pow(2,i);
        b /= 10;
        i++;
    }
    return d;
    
}

void main() {
    long long b;
    int d;
    printf("Enter a Binary Number:");
    scanf("%lld",&b);
    d = binToDec(b);
    printf("Decimal of %lld is %d",b,d);
}