#include<stdio.h>

void main() {
    int r,c;
    printf("Enter value for rows and column respectively::");
    scanf("%d %d",&r, &c);

   int  a[r][c], b[r][c],s[r][c];
   printf("Enter value for first matrix.\n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("enter value for a%d%d : ",i,j);
        scanf("%d",&a[i][j]);
    }
   }
   printf("Enter value for second matrix.\n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("enter value for b%d%d : ",i,j);
        scanf("%d",&b[i][j]);
    }
   }
   //Sum of matrix 
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        s[i][j] = a[i][j] + b[i][j];
    }
   }
    printf("Your matrix A: \n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }
    printf("Your matrix B: \n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
   }
    printf("Sum of A + B: \n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d ",s[i][j]);
    }
    printf("\n");
   }

}