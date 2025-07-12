#include<stdio.h>
#include<string.h>
void concate(char x[20], char y[20]){
    char newCh[40];
    for(int i=0; x[i] != '\0'; i++)
        newCh[i] += x[i];
    for(int j=0; newCh != '\0' ; j++)
    printf("new; %s",newCh[j]);
}
void main(){
    char fname[20]="rakesh", lname[20]="deep";
    int i=0,count=0;

    for( int i =0; fname[i] != '\0'; i++)
        count ++;
    printf(" lenght of %s is: %d",fname,count);
    // concate
    //printf("new char %s",concate(fname,lname));
    concate(fname,lname);

    
}