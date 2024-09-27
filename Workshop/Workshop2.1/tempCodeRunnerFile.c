#include <stdio.h>
int gcd (int a, int b){
    while (a!=b)
        if (a>b) a-=b;
        else b-=a;
    return a;
}
int lcm (int a, int b){
    return a*b/gcd(a,b);
}
int main(){
    int a, b;
    do{
        printf("Input a = ");
        scanf("%d",&a);
        getchar();
        printf("Input b = ");
        scanf("%d",&b);
        getchar();
    }while (a<=0 || b<=0);
    int d = gcd(a,b);
    int m = lcm(a,b);
    printf("GCD: %d", d);
    printf("\nLCM: %d", m);
}