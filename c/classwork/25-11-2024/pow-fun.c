#include<stdio.h>
#include<math.h>

int fun(int x,int y){
    int b;
    b=pow(x,y);
    return b;

}
int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("%d reised to the power %d is %d",x,y,fun(x,y));
}