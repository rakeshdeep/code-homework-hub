//wap to print the Greatest  element of array using Function

#include <stdio.h>

void Greatest_num(){
    int n, i, max, min;
    printf("Enter the size of Your Array:");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a%d: ",i);
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    printf("Greatest element= %d \n", max);

}
void main()
{
    Greatest_num();
}