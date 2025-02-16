#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

struct Emp {

    int sno;
    char name[50];
    float salary;
};

int main() {
    union Data data;  // Declare a union variable
    struct Emp emp1 = {1, "rakesh", 50000.00};

    // Assign and access different members
    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 22.5;
    printf("Float: %.2f\n", data.f);  // Overwrites previous value

    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);  // Overwrites previous value

    printf("sno: %d\nName: %s\nSalary: %.2f",emp1.sno, emp1.name, emp1.salary);

    return 0;
}

