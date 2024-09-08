/*WAP to find the factorial of a given number using FOR loop*/
#include<stdio.h>
void main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=num; i > 0; i--) {
        factorial *= i;
    }
    printf("Factotial of %d is %d",num, factorial);
}