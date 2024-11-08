// WAP to check perfect number using function
#include<stdio.h>
void perfect_num(int num){
int factorial = 1,sum=0;
    for(int i=num-1; i > 0; i--) {
        if(num%i == 0){
            sum+=i;
        }
    }
    num == sum ? printf("perfect number") : printf("not a perfect number");
     



}

void main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    perfect_num(n);
} 