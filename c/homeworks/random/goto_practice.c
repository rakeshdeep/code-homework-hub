#include<stdio.h>
void prime_using_loop();
void prime_using_goto();
void main()
{

    //prime_using_loop();
    prime_using_goto();


}

prime_using_loop() {
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
 // this is not for all and don't write these code you will get confused
prime_using_goto() {

    int n,i=2,isPrime=1;
    printf("Enter a Num:");
    scanf("%d",&n);
checker:
    if(i <= n /2)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            goto not_prime;
        }
        i+=1;
        goto checker;
    }
not_prime:
    isPrime ? printf("Prime") : printf("Non-prime");


}