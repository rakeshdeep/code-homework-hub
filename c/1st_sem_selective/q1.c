// WAP a C program to find the sum of 1+(1/2) + (1/3) + ..... (1/n) where n is taken by the user
#include<stdio.h>
void main(){
int n;
float sum = 0.0;
printf("enter value for n: ");
scanf("%d",&n);

for(int i=1; i<=n; i++){
        printf("(1/%d) ",i);
        if(i<n)
            printf("+ ");
        sum += (1.0/i);
}
printf("= %.6f",sum);

}
