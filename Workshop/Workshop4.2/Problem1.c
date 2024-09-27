#include <stdio.h>
void checkISBN(int n){
    int I[10];
    int C[10];
    int i;
    int j=11;
    int T = 0;
    int checkDigit;
    checkDigit=n%10;
    n=n/10;
    for (i=9; i>0; i--){
        I[i]=n%10;
        n=n/10;
    }
    for (i=1; i<=9; i++){
        C[i]=I[i]*(j-i);
        T+=C[i];
    }
    T=T+checkDigit;
    if (T%11==0){
        printf("This is a valid ISBN\n");
    }
    else printf("This is not a valid ISBN\n");
}
int main(){
    int n;
    printf("ISBN Validator ============ ISBN (0 to quit): ");
    do{
        scanf("%d",&n);
        if (n!=0){
            checkISBN(n);
        }
        else printf("Have a nice day!");
    }while(n<1000000);
}