// 3. Write a C program to print the Fibonacci sequence up to a given term.

#include<stdio.h>
void main(){
     int n, a=0, b=1,temp;
     printf("Enter value for n: ");
     scanf("%d",&n);
     printf("%d\n%d\n",a,b);
     for(int i =0; i<n; i++){
        temp = a+b;
        a = b;
        b = temp;
        printf("%d\n",temp);
     }

}
