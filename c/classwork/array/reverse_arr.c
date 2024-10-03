#include<stdio.h>

int main() {
    int size=0, p;
    printf("Enter Array Size: ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++){
        printf("Enter Array Element a%d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Updated array: ");
    for(int i=size-1; i>=0; i--)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
