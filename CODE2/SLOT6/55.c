#include <stdio.h>
#include <conio.h>
int maxN=3;
void T(int a, int b){
    int k = 0;
    k += a;
    k += b;
    int t=1;
    for (;t<k;t++) maxN+=t;
    printf("maxN=%d\n",maxN);
    printf("t+%d\n",t+k);
}
int main(){
    int x=1, y=1;
    T(x,y);
    maxN=10;
    printf("maxN=%d\n",maxN);
    getchar();
}