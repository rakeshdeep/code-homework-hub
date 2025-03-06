#include <stdio.h>

int main() {
    int arr[100];
    int size = 0;
    int p;
    printf("How many elements do you want to insert? ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Current array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Enter position to delete (0 to %d): ", size-1);
    scanf("%d", &p);
    for(int i = p; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
    printf("Array after deletion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
