// wap to calculate the number of viowel ,constant and space enter by the user
#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    printf("Enter a string:");
    gets(a);

    int i,s=0,v=0,c=0;
    for(i=0;i<strlen(a);i++){
        strlwr(a);
        char ch = a[i];
        if(a[i] == 'a' ||a[i]== 'e' || a[i]== 'i' || a[i] == 'o' || a[i] == 'u' ){
            v++;
        }
        else if(a[i] ==' '){
            s++;
        }
        else{
            c++;
        }
    }
    printf("no of viowels=%d \nno of constant= %d \nno of space= %d \n",v,c,s);
}