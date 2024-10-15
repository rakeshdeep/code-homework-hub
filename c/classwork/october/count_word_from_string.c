// wap that accept a string and count total no of words.

#include <stdio.h>
#include<string.h>

void main() {
    char str[1000];
    int i = 0, wc = 0, sp = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // this function is use to read input string in C


    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            sp = 0;
        } else if (sp == 0) {
            sp = 1;
            wc++;
        }
        i++;
    }

    printf("Total number of words: %d\n", wc);

}
