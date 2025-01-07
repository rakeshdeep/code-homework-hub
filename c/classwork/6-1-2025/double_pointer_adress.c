// WAP to demonstrate the adress of variable, pointer and double pointer using double pointer
#include <stdio.h>
void main(){
    int a = 10;
    int *p;
    int **pp;
    int ***ppp;

    p = &a;
    pp = &p;
    ppp = &pp;

    printf("Adress of a: %p\n", &a);
    printf("Adress of 'a' using single pointer: %p\n", p);
    printf("Adress of 'a' using double pointer: %p\n", *pp);
    printf("Adress of 'a' using triple pointer: %p\n", **ppp);
}