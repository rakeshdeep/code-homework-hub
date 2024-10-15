// wap that accept a string and print it character by character
#include <stdio.h>

void main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

}
