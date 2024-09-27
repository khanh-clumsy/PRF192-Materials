#include <stdio.h>
int main(){
    int a = 5, b = 2, c = 1;
    while (a+b<20){
        c+= 2*a-b;
        a++;
        b+=2;
    }
    printf("%d",c);
    getchar();
    return 0;
}