#include <stdio.h>
int main() {
    char *p = (char*)207000;
    printf("Initial value of p: %d\n", p);
    printf("p + 8: %d\n", p + 8);
    printf("p - 3: %d\n", p - 3);
    p++;
    printf("Value of p after p++: %d\n", p);
    return 0;
}