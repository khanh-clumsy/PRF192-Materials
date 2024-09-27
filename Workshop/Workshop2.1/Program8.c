#include <stdio.h>
double makeDouble(int intpart, int fraction){
    double d_f = fraction;
    while (d_f >= 1) d_f /= 10;
    if (intpart < 0) return intpart - d_f;
    else return intpart + d_f;
}
int main(){
    int intpart, fraction;
    printf("Input integral part: ");
    scanf("%d", &intpart);
    getchar();
    do{
        printf("\nInput fraction part: ");
        scanf("%d", &fraction);
    }while (fraction<0);
    double value = makeDouble(intpart, fraction);
    printf("Value: %lf", value);
}