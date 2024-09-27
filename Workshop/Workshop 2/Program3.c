#include <stdio.h>

int main() {
    int S = 0;
    int x;
    printf("%d\n", x);
    while (x != 0) {
        printf("Enter an integer: \n");
        scanf("%d", &x);
        if (x != 0) {
            S += x;
        }
    }
    printf("The sum is: %d\n", S);
    return 0;
}