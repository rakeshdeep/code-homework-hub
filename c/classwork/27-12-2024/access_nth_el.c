// WAP to access nth element of an array using pointer
void main(){
    int arr[5] = {1, 2, 3, 4, 5},n;
    int *ptr = arr;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        ptr++;
    }
    printf("Value of arr[%d] = %d\n", n, *ptr);
}