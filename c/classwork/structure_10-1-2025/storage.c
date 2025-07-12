
#include<stdio.h>

void auto_storage_class(){
    auto int a = 10;
    printf("auto storage class variable a: %d\n", a);
}

void register_storage_class(){
    register int a = 10;
    printf("register storage class variable a: %d\n", a);
}

void static_storage_class(){
    static int a = 10;
    printf("static storage class variable a: %d\n", a);
    a++;
}

int a = 20; 

void extern_storage_class(){
    extern int a;
    printf("extern storage class variable a: %d\n", a);
}

int main(){
    auto_storage_class();
    register_storage_class();
    static_storage_class();
    static_storage_class();
    extern_storage_class();
    return 0;
}