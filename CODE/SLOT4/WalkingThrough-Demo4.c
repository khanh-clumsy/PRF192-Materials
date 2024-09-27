#include <stdio.h>
int main(){
    int n = 15;
    int S=0;
    int i=1;
    while (i<2*n){
        S+=i;
        i*=4;
    }
    printf("%d\n",S);
    return 0;
}