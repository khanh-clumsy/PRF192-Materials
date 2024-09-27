#include <stdio.h>

int main() {
    int low, high;
    printf("Enter the low end of the range: ");
    scanf("%d", &low);
    printf("Enter the high end of the range: ");
    scanf("%d", &high);
    printf("    ");
    for (int j = low; j <= high; j++) {
        printf("%4d", j);
    }
    printf("\n");
    for (int i = low; i <= high; i++) {
        printf("%4d", i);
        for (int j = low; j <= high; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}