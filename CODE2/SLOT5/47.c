#include <stdio.h>
int sum(int a, int b){
    int t=a+b;
    return t;
}
int main(){
    int x=5, y=6;
    int z = sum(x,y);
    printf("Result: %d\n",z);
    getchar();
    return 0;
}