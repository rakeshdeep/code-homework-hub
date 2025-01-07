// WAP to print memory address of each cell in an array using pointer

#include <stdio.h>
 void main() {
     int arr[5] = {1, 2, 3, 4, 5};
     int *ptr = arr;
     for (int i = 0; i < 5; i++) {
         printf("Memory address of arr[%d] = %p\n", i, ptr);
         ptr++;
     }
 }