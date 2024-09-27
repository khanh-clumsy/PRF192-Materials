#include <stdio.h>
int main() {
    double *p = (double*)1200;
    printf("Initial value of p: %d\n", p);
    printf("p + 8: %d\n", p + 8);
    printf("p - 3: %d\n", p - 3);
    printf("p++: %d\n", p++);
    printf("Value of p after p++: %d\n", p);
    return 0;
}