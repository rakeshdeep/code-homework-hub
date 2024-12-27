// WAP a C program to reverse a string  
#include<stdio.h>
#include<string.h>
void main(){
    char s1[100],s2[100];
    printf("Enter string 1:");
    gets(s1);
    for (int i = strlen(s1)-1,j=0; i>=0,j<strlen(s1); i--,j++ )
        s2[j] += s1[i];
    printf("Reversed string: %s\n", s2);
}
