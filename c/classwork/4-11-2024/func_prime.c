// WAP to check whether the number is prime or not using function

#include<stdio.h>
int isPrime(){
    int i,n;
    char y;
    do
    {
        printf("Enter a Num::");
        scanf("%d",&n);

        for(i=2; i<=n/2; i++)
            if(n%i==0)break;

        (i>n/2) ? printf("prime\n") : printf("Non-prime\n");

        printf("Want to run again (y):");
        scanf("%s",&y);
    }
    while(y == 'y');
        
}
void main () {
    isPrime();
}

