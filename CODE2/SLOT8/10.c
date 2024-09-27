#include <stdio.h>
#include <conio.h>
int maxN=100;
double pi=3.141592;
double CalcImp(double r1, double r2, double r3){
    double t=1/(1/r1 + 1/r2 + 1/r3);
    printf("r1 ADDR: %u, value: %lf\n", &r1, r1);
    printf("r2 ADDR: %u, value: %lf\n", &r2, r2);
    printf("r3 ADDR: %u, value: %lf\n", &r3, r3);
    printf("t  ADDR: %u, value: %lf\n", &t, t);
    return t;
}
int main(){
    double R1=3, R2=8, R3=9;
}