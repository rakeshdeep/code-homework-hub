/* WAP to find the maximum among the numbers entered by the user using a while loop. */

#include <stdio.h>
void main() {
    int num, max;
    int first = 1;
    printf("Enter numbers (enter a negative number to stop): \n");
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) { 
            break;
        }

        if (first) {
            max = num;
            first = 0;  
        } else if (num > max) {
            max = num;r
        }
    }

    if (first) {
        printf("No valid numbers were entered.\n");
    } else {
        printf("The maximum number entered is: %d\n", max);
    }
}
