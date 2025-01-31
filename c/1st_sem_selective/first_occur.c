// WAP to find the 1st occurrences of a alphabet(entered by user) in a string without using any string function

#include<stdio.h>
 void main(){
 char str[100],ch;
 int i;
 printf("Enter a String: ");
 gets(str);
 printf("Enter a Character you want to find:");
 scanf("%c",&ch);
 for(i=0; str[i]!='\0'; i++){
    if(str[i] == ch){
        printf("\nFirst occurrence of '%c' is at %d position.\n",ch,i+1);
        break;
    }
 }
 if(str[i] == '\0')
    printf("\nCharacter Not found!\n");

 }
