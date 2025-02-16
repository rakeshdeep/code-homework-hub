
#include<stdio.h>

void main(){
    int n;
    float sum=0.0;
    printf("Enter a number upto which you want the series:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum =(float)sum + (1.0/i);
        printf("(1/%d)",i);
        if(i!=n)
            printf(" + ");

    }
    printf(" = %.3f",sum);
}
