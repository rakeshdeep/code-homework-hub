//  WAP to find the largest and smallest element in an array.
#include<stdio.h>

void main(){
    int arr[10]= {11,6,8,2,9,5,10,15,4,2};
    int largest,smallest;
    largest = smallest = arr[0];
    for(int i=0; i<10; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("Largest: %d\nSmallest: %d\n",largest,smallest);
}
