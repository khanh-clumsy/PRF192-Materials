#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int intRandom(int min, int max){
    return min + rand() % (max - min + 1);
}
int main(){
    int total, x, y, count;
    srand(time(NULL));
    do{
        printf("Total sought: ");
        scanf("%d", &total);
        getchar();
        if (total > 12 || total < 2){
            printf("Enter sought again (between 2 and 12): ");
            scanf("%d", &total);
            getchar();
        }
    }
    while (total < 2 || total > 12);
    count = 1;
    do{
        x = intRandom(1, 6);
        y = intRandom(1, 6);
        printf("Result of throw %d: %d + %d = %d\n", count, x, y, x + y);
        count++;
    }while ((x+y) != total);
    printf("You got your total in %d throws!", count-1);
}