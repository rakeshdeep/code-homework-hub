#include<stdio.h>
#include<string.h>

void main(){
int A= 65,n =4, x,r=0;
for(int i=1; i<=n; i++ ){
    for(int j=0; j<i; j++){
         x = A+j;
        if(r){
            printf("%c ",tolower(x));
        } else {
            printf("%c ",x);
        }
        r = !r;
    }
    A = x+1;
    printf("\n");
}
}
