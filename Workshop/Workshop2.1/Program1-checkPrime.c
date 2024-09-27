#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}
int main(){
    int n, i;
    do{
        printf("Input n = ");
        scanf("%d", &n);
    } 
    while (n < 2);
    for (i=2; i<=n; i++){
        if (isPrime(i)==1) printf("%d\n", i);
    }
}
wwd