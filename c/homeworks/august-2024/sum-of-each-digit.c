/*WAP to calculate the sum of each digit of a number entered by the user using while loop*/

#include <stdio.h>

void main() {
    int num, sum = 0, digit,temp;
    printf("Enter a number to calculate sum of each digit: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }


    printf("Sum of each digits of %d is = %d\n",temp,sum);
}
