#include<stdio.h>
void main()
{
    int a,b,c;
    double d;
    printf("enter 3 number a,b,c for checking greatest number between them: ");
    scanf("%d %d %d %lf",&a,&b,&c, &d);
    printf("a= %d \nb= %d \nc= %d \nd= %lf\n",a,b,c,d);
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
