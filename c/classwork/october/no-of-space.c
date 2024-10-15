// wap to calculate the space character in a given line of text
#include<stdio.h>
#include<string.h>
void main(){
    int i,j=0;
    char a[500];
    printf("Enter a string::");
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]==' ')
        {
            j++;
        }
    }
    printf("No of space are %d",j);
}