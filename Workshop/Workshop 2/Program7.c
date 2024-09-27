#include <stdio.h>
int main(){
    char c1, c2;
    int d;
    char t, c;
    printf("Enter char1: ");
    scanf("%c", &c1);
    getchar();
    printf("Enter char2: ");
    scanf("%c", &c2);
    getchar();
    if (c1 > c2){
        t = c1;
        c1 = c2;
        c2 = t;
    }
    d = c2 - c1;
    printf("The difference between %c and %c is: %d", c1, c2, d);
    for (c = c1; c <= c2; c++){
        printf("\nChar: %c, Decimal: %d, Octal: %o, Hexadecimal: %X\n", c, c, c, c);
    }
}