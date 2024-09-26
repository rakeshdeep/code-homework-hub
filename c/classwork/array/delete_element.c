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
    printf("Enter position to delete (array size is %d): ", size);
    scanf("%d",&p);

    for(int i=(p-1); i<(size-1); i++)
        arr[i] = arr[i+1];


    size--;
    
    printf("Updated array: ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
