// WAP to copy string using pointer

#include <stdio.h>
void main(){
    char str1[100], str2[100], *p1, *p2;
    printf("Enter a string: ");
    gets(str1);
    p1 = str1;
    p2 = str2;
    while(*p1 != '\0'){
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("Copied string: %s\n", str2);
}