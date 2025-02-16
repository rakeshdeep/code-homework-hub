#include <stdio.h>

int main() {
    int a = 7, b = 3, c;

    c = a-- - --b + ++a + b++;
    a += c-- - --b + a++;

    printf("%d %d %d\n", a, b, c);
    return 0;
}
