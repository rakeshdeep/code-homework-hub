// 5.	Write a function space(x) that can be used to provide a space of x position between two output numbers.

#include<stdio.h>
void space(int x){
    for(int i=0; i<x; i++){
        printf(" ");
    }
}

void main(){
    space(5);
    printf("Hello");
    space(10);
    printf("World");
}
