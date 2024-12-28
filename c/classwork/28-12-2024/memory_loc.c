// Print all the memory location stored in a pointer array

#include<stdio.h>
void main(){
    int *p[5];
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int *ptr[5] = {&a, &b, &c, &d, &e};
    for (int i = 0; i < 5; i++)
    {
        printf("The memory location of %d is %p\n", *ptr[i], ptr[i]);
    }

}