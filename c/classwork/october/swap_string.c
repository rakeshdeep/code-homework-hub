// 5.wap to swap the string using third variable

#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100], temp[100];

    printf("Enter first string: ");
     scanf("%s",str1);

    printf("Enter second string: ");
     scanf("%s",str2);

    printf("\nBefore swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\nAfter swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

}
