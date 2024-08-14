//WAP a program to add 2 in all digit of a five digit number entered by the user..
#include <stdio.h>

void main() {
    int n, d1, d2, d3, d4, d5, newNum,temp;

    printf("Enter a five d number: ");
    scanf("%d", &n);
    temp = n;

    d1 = n / 10000;
    d2 = (n / 1000) % 10;
    d3 = (n / 100) % 10;
    d4 = (n / 10) % 10;
    d5 = n % 10;

    d1 = (d1 + 2) % 10;
    d2 = (d2 + 2) % 10;
    d3 = (d3 + 2) % 10;
    d4 = (d4 + 2) % 10;
    d5 = (d5 + 2) % 10;

    newNum = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("before adding 2 to each digit is: %d\n", temp);
    printf("after adding 2 to each digit1 is: %d\n", newNum);
}


/*USING FOR LOOP*/
/*
#include <stdio.h>

void main() {
    int n, newNum = 0, mul = 1;

    printf("Enter a 5 digit number: ");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        int digit = n % 10;
        digit = (digit + 2) % 10;
        newNum = digit * mul + newNum;
        mul *= 10;
        n /= 10;
    }

    printf("The new number after adding 2 to each digit is: %05d\n", newNum);
}
*/
