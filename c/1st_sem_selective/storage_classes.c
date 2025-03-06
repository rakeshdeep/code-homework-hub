#include <stdio.h>
#include "demo.c"

//extern float mynumm;

void counter() {
    static int count = 1;  // Retains value between function calls
    count++;
    printf("Count: %d\n", count);
}
int main() {
    counter();
    counter();
    counter();
    display();
    return 0;
}

