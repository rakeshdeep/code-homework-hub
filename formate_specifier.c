#include <stdio.h>

void main() {
    int a = 10;
    char b = 'X';
    char name[] = "rakesh";
    float mark = 85.5;
    double pi = 3.143;
    short s = 5;
    long l = 123456789;
    long long ll = 123456789012345LL;
    unsigned int ua = 20;
    unsigned char ub = 'Y';
    unsigned short us = 10;
    unsigned long ul = 987654321UL;
    unsigned long long ull = 987654321012345ULL;
    signed int sa = -10;
    signed char sb = 'Z';
    signed short ss = -5;
    signed long sl = -123456789L;
    signed long long sll = -123456789012345LL;

    printf("Integer a: %d\n", a);
    printf("Character b: %c\n", b);
    printf("String name: %s\n", name);
    printf("Float mark: %.2f\n", mark);
    printf("Double pi: %.3lf\n", pi);
    printf("Short s: %hd\n", s);
    printf("Long l: %ld\n", l);
    printf("Long long ll: %lld\n", ll);
    printf("Unsigned int ua: %u\n", ua);
    printf("Unsigned char ub: %c\n", ub);
    printf("Unsigned short us: %hu\n", us);
    printf("Unsigned long ul: %lu\n", ul);
    printf("Unsigned long long ull: %llu\n", ull);
    printf("Signed int sa: %d\n", sa);
    printf("Signed char sb: %c\n", sb);
    printf("Signed short ss: %hd\n", ss);
    printf("Signed long sl: %ld\n", sl);
    printf("Signed long long sll: %lld\n", sll);
}
