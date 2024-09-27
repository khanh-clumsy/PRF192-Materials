#include <stdio.h>
int getUserChoice(){
    int choice;
    printf("\n1-Operation 1");
    printf("\n2-Operation 2");
    printf("\nOthers-Quit");
    printf("\nChoose: ");
    scanf("%d%*c", &choice);
    return choice;
}
int sumBetween(int a, int b){
    int t;
    if (a>b){
        t = a;
        a = b;
        b = t;
    }
    int S = 0;
    for (t=a; t<=b; t++){
        S+=t;
    }
    return S;
}
void function1(){
    int n1, n2;
    printf("Ente 2 integers: ");
    scanf("%d%d%*c", &n1, &n2);
    printf("Sum = %d\n", sumBetween(n1, n2));
}
void printASCII(char c1, char c2){
    char c;
    if (c1>c2){
        c=c1;
        c1=c2;
        c2=c;
    }
    for (c=c1; c<=c2; c++){
        printf("%c, %3d, %3oq, %3Xh\n",c,c,c,c);
    }
}
void function2(){
    char c1,c2;
    printf("Enter 2 characters contiguosly: ");
    scanf("%c%c", &c1, &c2);
    printASCII(c1, c2);
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
        default:
            printf("Bye!\n");
        }
    }
    while (userChoice > 0 && userChoice < 3);
    fflush(stdin);
    getchar();
    return 0;

}