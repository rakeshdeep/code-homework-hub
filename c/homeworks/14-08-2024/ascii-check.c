// WAP to check the ASCII code of a user entered char
#include<stdio.h>

void main() {
    char ch;
    printf("Enter a char: ");
    scanf("%c", &ch);

    printf("The ASCII code of '%c' is %d\n", ch, ch);
}
