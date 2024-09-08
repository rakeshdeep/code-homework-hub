/*WAP to print the sum of first 50 natural number using FOR loop*/
#include<stdio.h>

void main() {
    int sum=0;
    for(int i=1; i<=50; i++) {
        sum +=i;
    }
    printf("Sum of first 50 Natural num= %d",sum);
}