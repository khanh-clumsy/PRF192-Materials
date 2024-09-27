#include <stdio.h>
void printDivisors(int n)
{
    int i;
    for (i=1;i<=n/2;i++)
        if (n%i==0) printf("%d ",i);
}