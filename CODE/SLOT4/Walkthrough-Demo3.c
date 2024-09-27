#include <stdio.h>
int main(){
    int m,n,i,S=0;
    scanf("%d%d",&n, &m);
    for (i=m; i<n; i++) S+=i;
    printf("%d", S);
}