// WAP to demonstrate the use of structure in c programming
#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    int age;
};
void main()
{
    struct student s1[5];
    for(int i=0; i<3; i++){
        printf("Enter roll number: ");
        scanf("%d", &s1[i].roll_no);
        printf("Enter name: ");
        scanf("%s", s1[i].name);
        printf("Enter age: ");
        scanf("%d", &s1[i].age);
    }
    printf("\n \n");
    for(int i=0; i<3; i++){
        printf("Roll number: %d\n", s1[i].roll_no);
        printf("Name: %s\n", s1[i].name);
        printf("Age: %d\n", s1[i].age);
    }
}