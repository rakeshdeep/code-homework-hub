#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 number a,b,c for checking greatest number between them: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("a= %d \nb= %d \nc= %d \n",a,b,c);
    if(a>b){
        if(a>c){
            printf("A is Greatest");
        }
    } else if(b>c){
        printf("B is Greatest");
    } else {
        printf("C is Greatest");
    }
}