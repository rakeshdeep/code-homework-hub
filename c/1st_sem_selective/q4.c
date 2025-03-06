/* 4.	Given are two one dimensional arrays A and B which are in ascending order.
Write a program to marge them into a single sorted array C that contain every items from arrays A and B. */

#include<stdio.h>
void main(){
    int A[5] = {1,2,3,4,5}, B[5] = {3,5,6,9,11};
    int C[10];
    int i = 0, j = 0, k = 0;
    
    while(i < 5 && j < 5){
        if(A[i] <= B[j]){
            C[k] = A[i];
            i++;
        }else{
            C[k] = B[j];
            j++;
        }
        k++;
    }
    
    while(i < 5){
        C[k] = A[i];
        i++;
        k++;
    }
    
    while(j < 5){
        C[k] = B[j];
        j++;
        k++;
    }

    for(int i=0; i<10; i++){
        printf("%d  ",C[i]);
    }
}
