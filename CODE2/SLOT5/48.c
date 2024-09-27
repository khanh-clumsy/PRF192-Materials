#include <stdio.h>
#include <stdbool.h>
int checkPrime(int n){
    int result = 1, i;
    for (i=2; i*i<=n && result == 1; i++){
        if (n%i==0) result = 0;
    }
    return result;
}
void print_n_Primes(int n){
    int count = 0;
    int value = 2;
    while (count < n)
    {   if (checkPrime(value)==1){
            printf("%d ", value);
            count++;
        }
        value++;
    }
}
int main(){
    int n;
    printf("So luong so nguyen to can in ra la: ");
    scanf("%d", &n);
    print_n_Primes(n);
    return 0;
}