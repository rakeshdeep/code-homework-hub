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
   
    printf("Your matrix is: \n");
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        if(a[1][0]== a[0][1] && a[2][0]== a[0][2] && a[2][1]== a[1][2]){
            printf("It's symetrix metrix");
            break;
        }
        
    }
    printf("\n");
   }

}