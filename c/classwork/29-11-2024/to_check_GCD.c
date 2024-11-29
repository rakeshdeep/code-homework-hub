#include <stdio.h>


int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;


    int gcd = findGCD(n1, n2);
    printf("The GCD of %d and %d is: %d\n", n1, n2, gcd);

    return 0;
}
