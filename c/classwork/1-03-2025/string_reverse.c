#include<stdio.h>
#include<string.h>

void reverseStr(char ch[]){
int s = strlen(ch);
char newChar[s +1];
for(int i=0,j=s-1; i<s, j>=0; i++,j--)
    newChar[i] = ch[j];
    printf("%s\n%s\n",ch,newChar);
    newChar[s] = '\0';
strcmp(ch, newChar) == 0 ? printf("String is a Palindorm") : printf("String is not a Palindrom");

}

void main() {
char str[100];
printf("Enter a string: ");
scanf("%s",str);
reverseStr(str);
}
