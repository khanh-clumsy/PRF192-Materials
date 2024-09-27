#include <stdio.h>
int main(){
    float a,b,c;
    float avg;
    printf("Mon Toan: ");
    scanf("%f",&a);
    printf("Mon Ly: ");
    scanf("%f",&b);
    printf("Mon Van: ");
    scanf("%f",&c);
    avg = (a + b + c) / 3;
    printf("AVG: %.2f", avg);
    return 0;
}