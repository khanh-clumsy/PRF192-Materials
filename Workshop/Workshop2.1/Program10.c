#include <stdio.h>
void printMinMaxDigits(int n){
    int digit, min, max;
    digit = n % 10;
    min = max = digit;
    n /= 10;
    while (n > 0){
        digit = n % 10;
        n /= 10;
        if (min > digit) min = digit;
        if (max < digit) max = digit;
    }
    printf("Max Digits: %d", max);
    printf("\nMin Digits: %d", min);
}
int main(){
    int n;
    do{
        printf("Input n = ");
        scanf("%d",&n);
        printMinMaxDigits(n);

    }while (n<0);
}