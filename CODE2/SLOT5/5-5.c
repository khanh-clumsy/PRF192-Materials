#include <stdio.h>
void printDivisors(int N){
    int i;
    for (i=1; i<=N/2; i++)
        if (N%i==0) printf("%d ", i);
}
int main()
{
    int n, i, j;
    printf("Number want to print: ");
    scanf("%d", &j);
    for (i = 1; i<=j; i++){
    printf("\nInput n= ");
    scanf("%d", &n);
    printDivisors(n);
    getchar();}
    
}