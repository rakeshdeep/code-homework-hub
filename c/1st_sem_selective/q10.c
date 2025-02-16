
/*
Write a program to evaluate the following investment equation
V=P(1+r)^n
And print the tables which would give the value of V for various combination of the following values of p, r and n
P: 6000, 10000,13000
r : 0.10,0.12,0.13
n : 5,8,9

*/

#include<stdio.h>
#include<math.h>

void main() {
    int P[3] = {6000, 10000, 13000};
    float r[3] = {0.10, 0.12, 0.13};
    int n[3] = {5, 8, 9};
    float V;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                V = P[i] * pow(1+r[j], n[k]);
                printf("P: %d, r: %f, n: %d, V: %f\n", P[i], r[j], n[k], V);
            }
        }
    }
}
