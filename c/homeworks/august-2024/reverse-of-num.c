#include <stdio.h>

int main() {
    int n, rev = 0, r;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10; 
        rev = rev * 10 + r;
        n /= 10;
    }
    printf("reverse number is: %d\n", rev);

    return 0;
}
