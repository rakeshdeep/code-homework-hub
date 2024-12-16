#include <stdio.h>

void pascal(int n) {
    int a, b, c;
    for (a = 0; a < n; a++) {
        c = 1;
        for (b = 0; b <= a; b++) {
            printf("%d ", c);
            c = c * (a - b) / (b + 1);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    pascal(n);
    return 0;
}
