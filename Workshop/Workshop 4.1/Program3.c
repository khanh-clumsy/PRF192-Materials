#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void clear(){
    while (getchar() != '\n');
}
int getUserChoice(){
    int choice;
    printf("\n1-Process date date");
    printf("\n2-Character data");
    printf("\n3-Quit");
    printf("\nQuit");
    printf("\nSelect an operation: ");
    scanf("%d%*c", &choice);
    return choice;
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
void function1(){
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
void characterData(char a, char b){
    int start = (int)a;
    int end = (int)b;
    int t;
    if (start < end){
        t = start;
        start = end;
        end = t;
    }
    for (start; start >= end; start--){
        printf("%c: %d, %Xh\n", start, start, start);
    }
}
void function2(){
    char c1, c2;
    printf("Input char 1: ");
    scanf("%c", &c1);
    clear();
    printf("Input char 2: ");
    scanf("%c", &c2);
    clear();
    characterData(c1, c2);
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
        default:
            printf("Error!");
        }
    }
    while (userChoice > 0 && userChoice < 3);
    return 0;
}