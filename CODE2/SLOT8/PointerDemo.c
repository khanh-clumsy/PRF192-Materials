#include <stdio.h>
void swapDouble(double *p1, double *p2){
    double t=*p1;
    *p1=*p2;
    *p2=t;
}
int main(){
    double x, y;
    printf("Enter 2 real numbers: ");
    scanf("%lf%lf", &x, &y);
    swapDouble(&x, &y);
    printf("After swapping x=%lf, y=%lf\n", x, y);
    fflush(stdin);
    getchar();
    return 0;
}