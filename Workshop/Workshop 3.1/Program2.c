#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int getUserChoice(){
    int choice;
    printf("\n1-Fibonacci Sequence");
    printf("\n2-Check a date");
    printf("\n3-Quit");
    printf("\nSelect an operation: ");
    scanf("%d%*c", &choice);
    return choice;
}
int fibo (int n){
    int t1 = 1, t2 = 1, f = 1, i;
    for (i = 3; i <= n; i++){
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
void function1(){
    int n, i;
    printf("Input n = ");
    do{
        scanf("%d", &n);
        getchar();
    }while(n <= 0);
    for (i=1; i<=n; i++) 
    {
        printf("%d ", fibo(i));
    }
    }

int validDate(int d, int m, int y){
    int maxday = 31;
    if (d<1 || d>31 || m<1 || m>12) return 0;
    if (m==4 || m==6 || m==9 || m==11) maxday=30;
    else if (m==2){
        if (y%400==0||(y%4==0 && y%100!=0)) maxday=29;
        else maxday=28;
    }
    return d <= maxday;
}
void clear(){
    while (getchar() != '\n');
}
void function2(){
    int date, month, year;
    printf("Input Date = ");
    scanf("%d", &date);
    clear();
    printf("Input Month = ");
    scanf("%d", &month);
    clear();
    printf("Input Year = ");
    scanf("%d", &year);
    clear();
    if (validDate(date, month, year) == 1) printf("Valid date!");
    else printf("Invalid date!");
}
int main(){
    int userChoice;
    do{
        userChoice = getUserChoice();
        switch (userChoice)
        {
        case 1:
            function1();
            break;
        case 2:
            function2();
            break;
        case 3:
            break;
        }
    }
    while (userChoice > 0 && userChoice < 3);
    getchar();
    return 0;
}