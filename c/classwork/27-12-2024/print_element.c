// WAP to print elements of an array using pointer

void main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("Value of arr[%d] = %d\n", i, *ptr);
        ptr++;
    }
}