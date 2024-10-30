// wap to print the odd values elements from a array.

#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Odd elements in the array are: \n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d \n", arr[i]);
        }
    }
}