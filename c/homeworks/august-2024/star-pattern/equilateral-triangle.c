/*WAP to generate a Equailateral-triangle shape*/
#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter num of row : ");
    scanf("%d",&n);
    for( i=1; i<n; i++)
    {
        for(int s=1; s<=n-i; s++)
            printf(" ");
        for( j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
}
