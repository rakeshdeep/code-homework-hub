//  WAP a program to check the number is armstrong or not using function
#include <stdio.h>
#include <math.h>

int isArmstrong(int a){
    int originalNum, remainder, n = 0,result=0;
    originalNum = a;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = a;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == a)
        return 1;
    else
        return 0;
}

void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    isArmstrong(num) ? printf("%d is an Armstrong number.\n", num) : printf("%d is not an Armstrong number.\n", num);
}
