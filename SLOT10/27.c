#include <stdio.h>
#include <stdlib.h>
int main(){
    char c;
    int numDigits=0, numAlphas=0, numOthers=0;
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            numDigits++;
        } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            numAlphas++;
        } else {
            numOthers++;
        }
    }
    printf("Number of Digits: %d\n", numDigits);
    printf("Number of Alphas: %d\n", numAlphas);
    printf("Number of Others: %d\n", numOthers);
}