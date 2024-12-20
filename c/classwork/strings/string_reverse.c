// WAP a C program to reverse a string  
#include<stdio.h>

void main(){
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0, j = strlen(str) - 1; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
}
