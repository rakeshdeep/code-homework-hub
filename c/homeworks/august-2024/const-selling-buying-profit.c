/*If the cost price and selling price of an item are input from the user, write a program to check whether the seller has made profit or loss and also calculate how much profit or loss occurred (if).*/

#include <stdio.h>

void main() {
    float cp, sp, p_or_l;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    if (sp > cp) {
        p_or_l = sp - cp;
        printf("You made a profit of: %.2f\n", p_or_l);
    } else if (sp < cp) {
        p_or_l = cp - sp;
        printf("You incurred a loss of: %.2f\n", p_or_l);
    } else {
        printf("No profit, no loss.\n");
    }
}
