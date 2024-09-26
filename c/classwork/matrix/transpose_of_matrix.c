#include<stdio.h>

void main() {
    int r,c;
    printf("Enter value for rows and column respectively::");
    scanf("%d %d",&r, &c);

   int  a[r][c];
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("enter value for a%d%d : ",i,j);
        scanf("%d",&a[i][j]);
    }
   }
    printf("Transpose of Matrix  is: \n");
   for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }

}