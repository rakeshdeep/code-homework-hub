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

int decToBin(int d){
    long long b = 0;
    int i = 1;
    int rem;
    while (d!=0)
    {
        rem = d % 2;
        d /= 2;
        b += rem * i;
        i *= 10;
    }
    return b;
}

void main() {
    long long b;
    int d;
    printf("Enter a Binary Number:");
    scanf("%lld",&b);
    d = binToDec(b);
    printf("Decimal of %lld is %d",b,d);
    printf("\nEnter a Decimal Number:");
    scanf("%d",&d);
    b = decToBin(d);
    printf("Binary of %d is %lld",d,b);
}