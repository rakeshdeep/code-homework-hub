/*WAP to generate a right-angle-triangle shape*/
#include<stdio.h>

void main()
{
    int n;
    printf("Enter num of row : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
