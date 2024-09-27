#include <stdio.h>
int isPrime( int);
int main(){
    int n;
    printf("Input n= ");
    scanf("%d",&n);
    if (isPrime(n)==1) printf("It's a prime.");
    else printf("It's not a prime.");
    getchar();
    return 0;
}
