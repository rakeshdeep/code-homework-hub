#include<stdio.h>

void main() {
    char operation;
    double x,y;

    printf("Enter an Operation (+, -, *, /):");
    scanf("%s",&operation);
    printf("Enter two number separe them by space: ");
    scanf("%d %d",&x, &y);
    switch(operation){
        case '+' : printf("Sum of x & y is: %d \n", x+y); break;
        case '-' : printf("Subtraction of greater from smaller is : %d \n", x>y ? x-y : y-x); break;
        case '*' : printf("Multiplication of x * y is: %d \n", (x*y)); break;
        case '/' : printf("Division of greater from smaller is: %d \n", (x>y ? x/y : y/x)); break;
        default : printf(" You have choosen some wrong symbol choose from (+, -, *, /) \n");

    }
}
