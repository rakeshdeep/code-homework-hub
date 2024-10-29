#include<stdio.h>
int triangle_area( int h, int b){
    return (0.5 * h * b);
}
 void main() {
    int h,b;
    printf("Enter height and base of your triangle respectively (in cm ): ");
    scanf("%d %d", &h,&b);
    printf("Area of triangle is: %d cm ",triangle_area(h,b));
 }

