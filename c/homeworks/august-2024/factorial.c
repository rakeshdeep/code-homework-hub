/*WAP to find the factorial of a given number by user using while looop*/
#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = num; 
    while (i > 0) {
        factorial *= i;
        i--;
    }
    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}
