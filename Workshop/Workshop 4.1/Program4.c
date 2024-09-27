#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void clear(){
    while (getchar() != '\n');
}
int getUserChoice(){
    int choice;
    printf("\n1-Quadratic Equation");
    printf("\n2-Bank Deposit");
    printf("\n3-Quit");
    printf("\nQuit");
    printf("\nSelect an operation: ");
    scanf("%d%*c", &choice);
    return choice;
}
void quadraticEquation(float a, float b, float c){
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f va x2 = %.2f\n", x1, x2);
        }
    }
}
void function1(){
    float a, b, c;
    printf("Phuong trinh bac 2: ax^2 + bx + c = 0");
    printf("Nhap a: ");
    scanf("%f", &a);
    clear();
    printf("Nhap b: ");
    scanf("%f", &b);
    clear();
    printf("Nhap c: ");
    scanf("%f", &c);
    clear();
    quadraticEquation(a, b, c);
}
double bankDeposit(int deposit, float yearlyRate, int years){
    double P = deposit * pow((1 + yearlyRate), years);
    return P;
}
void function2(){
    int d, y;
    float r;
    do{
        printf("Input deposit = ");
        scanf("%d", &d);
        clear();
        if (d<0){
            printf("Input deposit again (deposit must be positive) = ");
        }
    }while(d<0);
    do{
        printf("Input yearly rate = ");
        scanf("%f", &r);
        clear();
        if(r>0.1){
            printf("Input yearly rate again (yearly rate must less than or equal to 0.1 = )");
        }
    }while(r>0.1);
    do{
        printf("Input years = ");
        scanf("%d", &y);
        clear();
        if (y<0){
            printf("Input year again (year must be positive) = ");
        }
    }while(y<0);
    printf("Bank deposit = %.2f", bankDeposit(d, r, y));
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