#include <stdio.h>
double equivalent(double r1, double r2, double r3){
    double Z;
    return Z = (r1*r2*r3)/(r2*r3+r1*r2+r1*r3);
}
int main(){
    double R1, R2, R3, Z;
    printf("\nInput 3 resistances: ");
    scanf("%lf%lf%lf", &R1, &R2, &R3);
    printf("Their equivalent: %lf\n", equivalent(R1, R2, R3));
    getchar();
    getchar();
}