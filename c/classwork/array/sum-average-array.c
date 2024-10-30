// wap to find sum and average of elements in an array.

#include <stdio.h>
void main()
{
    int n, i;
    float sum = 0.0, avg;
    printf("Enter the number of elements in the array::");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    printf("sum of array elements:%.2f \n", sum);
    printf("Average of array elements:%.2f \n", avg);
}