// WAP to store array of strings and display each item with adress and and string using pointer

#include <stdio.h>
void main(){
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    char *p;
    p = ch;
    while(*p != '\0'){
        printf("Address: %p, Value: %c\n", p, *p);
        p++;
    }
}