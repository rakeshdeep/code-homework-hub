// WAP a program to generate factorial of a number using recursion.

#include<stdio.h>
int factorial(int n){
    if(n == 1)
        return 1;
    else if (n<0){
        return 0;
    }
    else
        return n * factorial(n-1);
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n) ? printf("Factorial of %d is %d", n, factorial(n)) : printf("imaginary number");

}
