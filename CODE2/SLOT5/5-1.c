#include <stdio.h>
double average(int a, int b, int c)
    {
        double result;
        result = (a+b+c)/3.0;
        return result;
    }
int main(){
    printf("%f", average(1,2,3));
}
