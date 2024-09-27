#include <stdio.h>
int validDate(int d, int m, int y){
    int maxday = 31;
    if (d<1 || d>31 || m<1 || m>12) return 0;
    if (m==4 || m==6 || m==9 || m==11) maxday=30;
    else if (m==2){
        if (y%400==0||(y%4==0 && y%100!=0)) maxday=29;
        else maxday=28;
    }
    return d<=maxday;
}
int main(){
    int day, month, year;
    printf("Enter date/month/year: ");
    scanf("%d%d%d", &day, &month, &year);
    if (validDate(day, month, year)==1) printf("Valid date!");
    else printf("Invalid date!");
}