/*WAP to find the factorial of a given number using function*/
#include<stdio.h>

void factorial(int num){
    int fact = 1;
    for(int i=num; i > 0; i--) {
        fact *= i;
    }
    printf("Factotial of %d is %d",num, fact);
}

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);
    
}