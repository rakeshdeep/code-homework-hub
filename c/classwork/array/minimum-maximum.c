//wap to print the maximum and minimum element of array

#include <stdio.h>
void main()
{
    int n, i, max, min;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element= %d \n", max);
    printf("minimum element= %d \n", min);
}