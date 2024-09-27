#include <stdio.h>
#include <math.h>
int getUserChoice(){
    int choice;
    printf("\n1-Process Primes");
    printf("\n2-Print min-max digits in an integer");
    printf("\n3-Hello");
    printf("\n4-Quit");
    printf("\nQuit");
    printf("\nSelect an operation: ");
    scanf("%d%*c", &choice);
    return choice;
}
int isPrime(int n){
    int i;
    if (n==1) return 0;
    else if (n<=3) return 1;
    for (i=2; i*i<=n; i++) {
        if(n % i == 0) return 0;
    return 1;
}
}
void function1(){
    int n;
    do{
        printf("Input n = ");
        scanf("%d", &n);
    }while(n<0);
    if (isPrime(n)==1) printf("It is a prime number");
    else printf("It is not a prime number");
}
void printMinMaxDigits(int n){
    int digit, min, max;
    digit = n % 10;
    min = max = digit;
    n /= 10;
    while (n > 0){
        digit = n % 10;
        n /= 10;
        if (min > digit) min = digit;
        if (max < digit) max = digit;
    }
    printf("Max Digits: %d", max);
    printf("\nMin Digits: %d", min);
}
void function2(){
    int n;
    printf("Input n = ");
    scanf("%d", &n);
    getchar();
    printMinMaxDigits(n);
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
            printf("Hello");
            break;
        case 4:
            printf("Quit");
            break;
        default:
            printf("Error!");
        }
    }
    while (userChoice > 0 && userChoice < 4);
    return 0;
}