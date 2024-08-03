#include<stdio.h>
void main()
{
    char name[50], ql[60],from[60];
    int age;
    printf("what is your name:");
    scanf("%s",name);
    printf("What is your qualification: ");
    scanf("%s",ql);
    printf("where are you from: ");
    scanf("%s", from);
    printf("How old are you:");
    scanf("%d",&age);

    printf("\n Welcome %s\n, Great you have %s quialification at the age of %d belonging from %s \n",name,ql, age, from);
}
