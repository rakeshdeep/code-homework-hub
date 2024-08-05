#include<stdio.h>

void main(){

int n;
printf("Enter a number to know odd or even: ");
scanf("%d",&n);
if(n == 0){
    printf("Neutral");
}
else if(n%2 == 0){
    printf("Even numver");
} else {
    printf("Odd number");
}

}
