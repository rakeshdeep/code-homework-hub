#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50] = "HelloWorld";
    char str5[50] = "World";
    
    // strlen - to get the length of a string.
    printf("Length of str1: %lu\n", strlen(str1));
    
    // strcmp - to compare two strings.
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }
    
    // strcpy -  to copy one string to another.
    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);
    
    // strncpy - to copy a specified number of characters from one string to another.
    strncpy(str3, str2, 3);
    str3[3] = '\0'; // Null-terminate the string
    printf("str3 after strncpy: %s\n", str3);
    
    // strcat -  to concatenate two strings.
    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);
    
    // strstr - to find a substring within a string.
    if (strstr(str4, str5) != NULL) {
        printf("str5 is found in str4\n");
    } else {
        printf("str5 is not found in str4\n");
    }
    
    return 0;
}