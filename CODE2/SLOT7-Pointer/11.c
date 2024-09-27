#include <stdio.h>
int main(){
    int n = 7;
    int*pn = &n;
    int**ppn= &pn;
    printf("Variable n: addr: %u, value: %d\n", &n, n);
    printf("Variable pn: addr: %u, value: %u\n", &pn, pn);
    printf("Variable ppn: addr: %u, value: %u\n", &ppn, ppn);
    getchar();
    return 0;
}