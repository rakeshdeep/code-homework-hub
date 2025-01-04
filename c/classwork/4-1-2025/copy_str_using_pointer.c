// WAP to copy string using pointer with call by reference
#include <stdio.h>

void strCpy(char *source, char *dest) {
    while(*source != '\0') {
        *dest = *source;
        source++;
        dest++;
    }
    *dest = '\0';
}

void main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    strCpy(str1, str2);
    printf("Copied string: %s\n", str2);
}
