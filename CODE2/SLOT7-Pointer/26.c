#include <stdio.h>
#include <stdlib.h>
int main(){
    char* pc1, * pc2;
    pc1 = (char *)malloc(sizeof(char));
    pc2 = (char *)malloc(sizeof(char));
    printf("Nhap vao ky tu so 1: ");
    scanf("%c", pc1);
    getchar();
    printf("Nhap vao ky tu so 2: ");
    scanf("%c", pc2);
    getchar();
    if(*pc1 > *pc2){
        char temp = *pc1;
        *pc1 = *pc2;
        *pc2 = temp;
    }
    for (char c = *pc1; c <= *pc2; c++){
        printf("%c\t%4d\t\t%4o\t\t%4X\n", c, c, c, c);

    }}