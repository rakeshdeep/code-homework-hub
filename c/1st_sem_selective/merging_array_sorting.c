
#include<stdio.h>

void mergeArray(int arr1[], int s1, int arr2[], int s2, int result[])
{
    int i,j,k;
    i=j=k=0;
    for(i=0; i<s1; i++)
    {
        result[k++] = arr1[i];
    }
    for(j=0; j<s2; j++)
    {
        result[k++] = arr2[j];
    }
}

void sortArray(int arr[], int size)
{
    for(int i=0; i<size-1; i++ )
    {
        for(int j=0; j<size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {3,5,6,3};
    int B[]= {1,2,9};
    int s1 = sizeof(A) / sizeof(A[0]);
    int s2 = sizeof(B) / sizeof(B[0]);
    int result[s1+s2];
    mergeArray(A,s1,B,s2,result);
    sortArray(result, s1+s2);

    printf("After Merging and sorting: ");
    for(int i=0; i<s1+s2; i++)
    {
        printf("%d ",result[i]);
    }

    return 0;
}
