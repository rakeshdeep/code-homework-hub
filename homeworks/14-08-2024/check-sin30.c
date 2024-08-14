// WAP to check the value of sin30
#include <stdio.h>
#include <math.h>

int main() {
    double result;
    double angle = 30.0;
    double radians = angle * (M_PI / 180.0);
    result = sin(radians);
    printf("The value of sin(30 degrees) is: %lf\n", result);

    return 0;
}

