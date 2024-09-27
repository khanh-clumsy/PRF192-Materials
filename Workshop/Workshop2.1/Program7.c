#include <stdio.h> 
int sumDigits(int n){
    int sum = 0;
    do{
        sum += n % 10;
        n /= 10;
    }while (n>0);
    return sum;
}
int main(){
    int n;
    do{
        printf("\nInput n = ");
        scanf("%d",&n);
        getchar();
        if (n>=0) {
            int S = sumDigits(n);
            printf("%d", S); 
        }
    }while(n>=0);
}