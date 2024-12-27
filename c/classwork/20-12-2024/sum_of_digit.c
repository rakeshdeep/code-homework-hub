// WAP a C program to find the sum of all digits until it becomes a single digit.

#include <stdio.h>

void main() {
    int num, sum, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }
        num = sum;
    }

    printf("Sum of digits until single digit: %d\n", num);
}
