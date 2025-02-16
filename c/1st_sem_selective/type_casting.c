
#include <stdio.h>
    extern float PI;
int main() {
    int x = 5, y = 2;
    float result;
    int a=10;
    float b = a; // implicitly casting
    printf("PI = %f",PI);
    result = (float)x / y;  // Explicitly casting x to float before division

    printf("Result: %.2f\n", result); // Output: 2.50
    printf("value of (int) a:%d\n ",a);
    printf("value of (float) b: %.2f\n ",b);

    return 0;
}
