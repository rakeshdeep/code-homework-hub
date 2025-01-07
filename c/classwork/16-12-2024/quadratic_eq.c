#include <stdio.h>
#include <math.h>

void find_root(int a, int b, int c)
{
    float r, r1, r2, rp, ip;
    int disc = pow(b, 2) - 4 * a * c;
    if (disc > 0)
    {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("The equation has two real and distinct roots %.3f and %.3f \n", r1, r2);
    }
    else if (disc == 0)
    {
        r = -b / (2 * a);
        printf("The equation has one real root: %.3f\n", r);
    }
    else
    {
        rp = -b / (2 * a);
        ip = sqrt(-disc) / (2 * a);
        printf("the eq. has complex roots:\n %.3f + %.3fi and %.3f - %.3fi", rp, ip, rp, ip);
    }
}

int main()
{

    float x, y, z;
    printf("Enter value for x,y,z: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x == 0)
        printf("This is not a quadratic equation (x cannot be zero).");
    else
        find_root(x, y, z);
    return 0;
}