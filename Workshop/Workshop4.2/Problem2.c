#include <stdio.h>
#include <stdlib.h>
#define MAXN 100
int getUserChoice(){
    int choice;
    printf("\n1-ADD A VALUE");
    printf("\n2-SEARCH A VALUE");
    printf("\n3-PRINT OUT THE ARRAY");
    printf("\n4-PRINT OUT VALUES IN RANGE");
    printf("\n5-PRINT OUT THE ARRAY IN ASCENDING ORDER");
    printf("\nOthers-Quit");
    printf("\nChoose: ");
    scanf("%d%*c", &choice);
    return choice;
}
int isFull(int a[], int n){
    return n==MAXN;   
}
int isEmpty(int a[], int n){
    return n==0;
}
void addtoArray(int x, int a[], int *pn){
    a[*pn] = x;
    (*pn)++;
}
int search(int x, int *a, int n){
    int i;
    int count = 0;
    for (i=0; i<n; i++) if (a[i]==x) count++;
    else printf("There is no number %d", x);
    printf("Number %d exist : %d", x, count);
}
void printArray(int a[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void printinRange(int a[], int n, int minVal, int maxVal){
    int i;
    int found = 0;
    for (i = 0; i < n; i++) {
        if (a[i] >= minVal && a[i] <= maxVal) {
            printf("%d ", a[i]);
            found = 1;
        }
    }
    if (found==0) printf("No values found in the range %d to %d", minVal, maxVal);
}
void printAsc(int *a, int n){
    int** adds = (int**)calloc(n, sizeof(int*));
    int i, j;
    for (i=0; i<n; i++) adds[i] = &a[i];
    int *t;
    for (i=0; i<n-1; i++){
        for (j=n-1; j>i; j--)
            if (*adds[j] < *adds[j-1]){
                t = adds[j];
                adds[j] = adds[j-1];
                adds[j-1] = t;
            }
    }
    for (i=0; i<n; i++) printf("%d ", *adds[i]);
    free(adds);
}
int main(){
    int a[MAXN];
    int n=0;
    int userChoice;
    int value;
    do{
        userChoice = getUserChoice();
        switch(userChoice){
            case 1: 
                if (isFull(a, n)) printf("\nSorry! The array is full.\n");
                else{
                    printf("Input an added value: ");
                    scanf("%d", &value);
                    addtoArray(value, a, &n);               
                    printf("Added\n");
                }
                break;
            case 2:
                if (isEmpty(a, n)) printf("\nSorry! The array is empty.\n");
                else{
                    printf("Enter the number you want to search: ");
                    scanf("%d", &value);
                    search(value, a, n);
                }
                break;
            case 3:
                if (isEmpty(a, n)) printf("\nSorry! The array is empty.\n");
                else{
                    printArray(a, n);
                    }
                break;
            case 4:
                if (isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
                else{
                    int minVal, maxVal;
                    printf("Input the min value: ");
                    scanf("%d", &minVal);
                    printf("Input the max value: ");
                    scanf("%d", &maxVal);
                    printinRange(a, n, minVal, maxVal);
                }
                break;
            case 5:
                printAsc(a, n);
                break;
            default: 
                break;
    }
    }
    while (userChoice>0 && userChoice<5);
    getchar();
    return 0;
}
