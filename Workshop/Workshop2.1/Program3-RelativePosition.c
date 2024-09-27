#include <stdio.h>
#include <math.h>
int getRelPos(double x, double y, double r){
    double d2 = sqrt(x*x + y*y);
    if (d2 < r) return 1;
    else if (d2 == r) return 0;
    return -1;
}
int main(){
    double x, y;
    double radius;
    printf("Input x, y = ");
    scanf("%lf%lf", &x, &y);
    getchar();
    do{
        printf("Input radius: ");
        scanf("%lf", &radius);
        getchar();
    }
    while (radius < 0);
    int result = getRelPos(x, y, radius);
    if (result == 1) printf("The point is in the circle");
    else if (result == 0) printf("The point is on the circle");
    else printf("The point is out of the circle");
}