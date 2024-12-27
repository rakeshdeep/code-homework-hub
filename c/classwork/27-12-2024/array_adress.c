// WAP to print memory address of each cell in an array using adress of operator
#include <stdio.h>

void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("Memory address of arr[%d] = %p\n", i, &arr[i]);
    }
}   