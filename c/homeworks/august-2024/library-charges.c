/* A Library charges a fine for every book return late for first 5 days the fine is 50 paisa, for 6-10 days fine is 1 rupee and above 1- days fine is 5 rupees if you return the book after 30 days your membership is cancel. WAP a program in c using if else */

#include <stdio.h>

int main()
{
    int lateDay;
    float fine = 0.0;

    // Input the number of days the book is returned late
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &lateDay);

    if (lateDay > 30)
    {
        printf("Membership cancelled.\n");
    }
    else if (lateDay > 10)
    {
        fine = 5.0;  // 5 rupees for more than 10 days
    }
    else if (lateDay > 5)
    {
        fine = 1.0;  // 1 rupees for 6-10 days
    }
    else if (lateDay > 0)
    {
        fine = 0.5; // 50 paise for 1-5 days
    }
    else
    {
        printf("No fine");
    }
    if(fine>0){
        printf("You Need to pay fine of %.2f rupee\n",fine);
    }
}
