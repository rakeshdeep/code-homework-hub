#include <stdio.h>
#include <math.h>

double Calculation(int p, float r, int n) {
    return p * pow((1 + r), n);
}

int main() {
    int P_values[] = {6000, 10000, 13000};
    float R_values[] = {0.10, 0.12, 0.13};
    int N_values[] = {5, 8, 9};

    printf(" P      r      n      V (Final Value)\n");
    printf("--------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        double V = Calculation(P_values[i], R_values[i], N_values[i]);
        printf("%d   %.2f   %d   %.2f\n", P_values[i], R_values[i], N_values[i], V);

    }

    return 0;
}
