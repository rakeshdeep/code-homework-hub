#include <stdio.h>

// Define a structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Declare a structure variable
    struct Employee emp1 = {101, "John Doe", 50000.50}, emp2 = {12, "rakesh", 20000.40};


    // Access structure members
    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2f\n", emp1.salary);

    // Access structure members
    printf("Employee ID: %d\n", emp2.id);
    printf("Employee Name: %s\n", emp2.name);
    printf("Employee Salary: %.2f\n", emp2.salary);

    return 0;
}

