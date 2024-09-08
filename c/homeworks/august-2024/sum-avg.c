/*WAP to find the total and average of numbers entered by the user using a while loop.*/

#include <stdio.h>

void main() {
    int count = 0;
    float num, sum = 0.0, average;
    printf("Enter numbers (enter a negative number to stop): \n");

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num < 0) { 
            break;
        }

        sum += num; 
        count++;     
    }
    if (count != 0) {
        average = sum / count;
        printf("Total: %.2f\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
}
