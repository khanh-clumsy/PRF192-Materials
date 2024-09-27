#include <stdio.h>
#include <stdlib.h>
int main(){
    int m, n; double x;
    int count;
    char c;
    count = scanf("%d%d%lf", &m, &n, &x);
    printf("count =%d, m =%d, n=%d, x=%lf\n", count, m, n, x);
    system("pause");
}