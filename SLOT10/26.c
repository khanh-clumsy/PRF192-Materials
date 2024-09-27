#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void clear(){
    while (getchar() != '\n');
}
int main(){
    char c1, c2;
    printf("Input the first character: ");
    scanf("%c", &c1);
    clear();
    printf("Input the second character: ");
    scanf("%c", &c2);
    c2 = getchar();
    printf("c1 = %c, ASCII code: %d\n", c1, c1);
    printf("c2 = %c, ASCII code: %d\n", c2, c2);
    getch();
}