#include <stdio.h>

// Function to merge two arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i, j, k;
    i = j = k = 0;

    // Copy elements of arr1 to merged
    for (i = 0; i < size1; i++) {
        merged[k++] = arr1[i];
    }

    // Copy elements of arr2 to merged
    for (j = 0; j < size2; j++) {
        merged[k++] = arr2[j];
    }
}

// Function to sort an array using Bubble Sort
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr1[] = {5, 8, 1, 3,9};
    int arr2[] = {7, 2, 6, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("size1: %d \nsize2: %d\n",size1, size2);
    int merged[size1 + size2];

    // Merging the arrays
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Sorting the merged array
    sortArray(merged, size1 + size2);

    // Displaying the sorted merged array
    printf("Sorted Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

