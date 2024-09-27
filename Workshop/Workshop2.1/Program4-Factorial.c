#include <stdio.h>
int factorial (int n){
    double p = 1;
    int i;
    for (i=1; i<=n; i++)
        p = p * i;
    return p;
}
int main(){
    int n;
    do{
        printf("Input n = ");
        scanf("%d",&n);
    }
    while (n < 0);
    printf("%d", factorial(n));
}