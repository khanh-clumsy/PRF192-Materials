#include "stdio.h"
int main(){
    int n, i, S=0;
    scanf("%d", &n);
    for (i=1; i<n; i+=3)
        if (i%2!=0 && i%3!=0) S+=i;
    printf("%d\n", S);
}