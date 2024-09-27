#include <stdio.h>
int MAXN=10;
double average (int a, int b, int c)
{
    printf("Arg. a, address: %u, value: %d\n", &a, a);
    printf("Arg. b, address: %u, value: %d\n", &b, b);
    printf("Arg. c, address: %u, value: %d\n", &c, c);
    double t = (a+b+c)/3.0;
    printf("Var. t, address: %u, value: %d\n", &t, t);
    return t;
}
int main (){
    int a=5, b=5, c=8;
    printf("Var. MAXN, address: %u, value: %d\n", &MAXN, MAXN);
    printf("In main, var .a, address: %u, value: %d\n", &a, a);
    printf("In main, var .b, address: %u, value: %d\n", &b, b);
    printf("In main, var .c, address: %u, value: %d\n", &c, c); 
    printf("Add. of main(): %u\n", &main);
    printf("Add. of average (...): %u\n", &average);
    printf("Result returned to main: %lf\n", average(a,b,c));
    getchar();
    return 0;
}