#include <stdio.h>
int isPower2(long n){
    return ((n & (n-1))==0);
}
int main(){
    long n;
    printf("Enter n: ");
    do{
        scanf("%d",&n);
    }while(n<=0);
    if (isPower2(n)==1) printf("It is pow of 2");
    else printf("It is not power of 2");
}