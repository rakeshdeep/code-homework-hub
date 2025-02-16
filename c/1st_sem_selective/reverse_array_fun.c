// WAP a program to reverse an array using Function

#include<stdio.h>

int reverse(int arr[],int s){
    int rev[s];
    for(int i=0,j=s-1; i<s,j>=0; i++,j--){
        rev[i] = arr[j];
    }
    for(int j=0; j<s; j++)
        printf("%d ",rev[j]);

}
void main(){
    int arr[7] = {1,2,3,5,6,7,8};
    reverse(arr,7);

}
