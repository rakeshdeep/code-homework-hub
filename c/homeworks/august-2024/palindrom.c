/*WAP to check the number entered by user is a palindrom Number or Not.*/
#include <stdio.h>

int main() {
    int n, rev = 0, r,temp;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        r = n % 10; 
        rev = rev * 10 + r;
        n /= 10;
    }
    temp == rev ? printf("%d is a Palindrom Number.",temp) : printf("%d Not a palindraom Number.", temp);

    return 0;
}
