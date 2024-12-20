#include <stdio.h>

int decToBin(int n) {
    int bin[32], i = 0;
    if (n == 0) {
        printf("0");
        return 0;
    }
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("The binary is: ");
    decToBin(n);
    printf("\n");
    return 0;
}
