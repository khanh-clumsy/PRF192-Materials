#include <stdio.h>
int isPrime(int n){
    int result = 1, i;
    for (i=2; i*i<=n && result == 1; i++)
        if (n%i==0) result = 0;
    return result;
}