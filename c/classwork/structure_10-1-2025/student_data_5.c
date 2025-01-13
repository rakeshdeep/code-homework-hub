// WAP a c program to take name,roll,marks of 5 students and display them using structure
#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[20];
    int marks;
};
void main(){
    struct student s1,s2,s3,s4,s5;
    printf("Enter for s1(roll, name,marks): "); scanf("%d %s %d", &s1.roll_no, s1.name, &s1.marks);
    printf("Enter for s2(roll, name,marks): "); scanf("%d %s %d", &s2.roll_no, s2.name, &s2.marks);
    printf("Enter for s3(roll, name,marks): "); scanf("%d %s %d", &s3.roll_no, s3.name, &s3.marks);
    printf("Enter for s4(roll, name,marks): "); scanf("%d %s %d", &s4.roll_no, s4.name, &s4.marks);
    printf("Enter for s5(roll, name,marks): "); scanf("%d %s %d", &s5.roll_no, s5.name, &s5.marks);
     
    printf("\n \n");
    printf("s1: {%d, '%s', %d }\n", s1.roll_no, s1.name, s1.marks);
    printf("s2: {%d, '%s', %d }\n", s2.roll_no, s2.name, s2.marks);
    printf("s3: {%d, '%s', %d }\n", s3.roll_no, s3.name, s3.marks);
    printf("s4: {%d, '%s', %d }\n", s4.roll_no, s4.name, s4.marks);
    printf("s5: {%d, '%s', %d }\n", s5.roll_no, s5.name, s5.marks);

}