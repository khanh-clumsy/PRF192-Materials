#include <stdio.h>
int main(){
    //Khai bao bien:
    int pa=9000000, pd=3600000;
    int n, tf, ti, income, it;
    printf("Your income of this year: ");
    scanf("%d", &income);
    printf("\nNumber of dependent: ");
    scanf("%d", &n);
    tf = 12*(pa + n*pd);
    ti = income-tf;
    if (ti<=0) {
        it=0;
        ti=0;}
    else if (ti<=5000000) it=0.05*ti;
    else if ((ti>=5000001) && (ti<= 10000000)) it=0.1*ti;
    else if ((ti>=10000001) && (ti<=18000000)) it=0.15*ti;
    else if (ti>18000000) it=0.2*ti;
    printf("\nTax-free income: %d", tf);
    printf("\nTaxable income: %d", ti);
    printf("\nIncome tax: %d", it);
}