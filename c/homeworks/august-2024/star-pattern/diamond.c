/*WAP to generate a Diamond shape*/
#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter num of row : ");
    scanf("%d",&n);
    for( i=1; i<n; i++)
    {
        printf("\n");
        for(int s=1; s<=n-i; s++)
            printf(" ");
        for( j=1; j<=i; j++)
            printf("* ");
    }
    for(i=n-1; i>=1; i--)
    {
        printf("\n");
        for(int s=1; s<=n-i; s++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("* ");
    }
}
