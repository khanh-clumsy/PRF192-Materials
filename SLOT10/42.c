#include <stdio.h>
#include <stdlib.h>
int main(){
    char c;
    int result;
    printf("Input a character: ");
    c = getchar();
    printf("The inputted character is: ");
    result = putchar(c);
    printf("\n The return of putchar is %d", result);
    getch();
}