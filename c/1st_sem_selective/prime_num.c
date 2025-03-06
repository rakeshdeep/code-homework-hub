#include<stdio.h>

int main(){
    int num,count=0;
    printf("ENter a Num: ");
    scanf("%d", &num);
    for(int i=2; i<num; i++){
        if(num%i==0)
            count++;
    }
    count>0 ? printf("Non prime") : printf("Prime");

}
