// WAP a C program to reverse a string  
#include <stdio.h>
#include <string.h>

void reverseWord(char str[]) {
    int len = strlen(str);
    int start = 0, end = len - 1;
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    reverseWord(word);
    printf("Reversed word: %s\n", word);

    return 0;
}
