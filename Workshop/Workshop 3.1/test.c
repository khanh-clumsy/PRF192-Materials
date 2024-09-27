#include <stdio.h>
int fibo (int n){
    int t1 = 1, t2 = 1, f = 1, i;
    for (i = 3; i <= n; i++){
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
void function1(){
    int n, i;
    printf("Input n = ");
    do{
        scanf("%d", &n);
        getchar();
        if (n<=2) printf("Enter number greater than 2: ");
    }
    while (n<=2);
    printf("%d", fibo(n));

}
int main(){
    function1();
}
