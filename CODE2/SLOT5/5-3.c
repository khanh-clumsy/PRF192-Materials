#include <stdio.h>
int isPrime(int n){
    int i;
    for (i=2; i*i<=n; i++) {
        if(n%i==0) return 0;
    return 1;
}
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
}
