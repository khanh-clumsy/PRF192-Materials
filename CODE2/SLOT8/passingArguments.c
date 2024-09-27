#include <stdio.h>
void swap1(int x, int y){
    int t=x; x=y; y=t;
}
void swap2(int* px, int* py){
    int t=*px; *px=*py; *py=t;
}
void swap3(int &x, int &y){
    int t=x; x=y; y=t;
}
int main(){
    int a=3, b=4;
    swap1(a,b);
    printf("a=%d, b=%d\n",a,b);
    swap2(&a, &b);
    printf("a=%d, b=%d\n",a,b);
    int m=7, n=10;
    swap3(m,n);
    printf("m=%d, n=%d\n",m,n);
    getchar();

}