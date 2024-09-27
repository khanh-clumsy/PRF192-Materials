#include <stdio.h>
double PI = 3.14;
double areaCircle(double r){
    return PI*r*r;
}
double areaEllipse(double rx, double ry){
    return PI*rx*ry;
}
int main(){
    printf("PI = %lf\n", PI);
    printf("Area of a circle = %lf\n", areaCircle(3.5));
    printf("Area of an ellipse = %lf\n", areaEllipse(1, 2));
    getchar();
    return 0;
}
