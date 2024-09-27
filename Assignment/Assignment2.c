#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
struct Student{
    char ID[50];
    char names[50];
    char initials[50];
    float mark1;
    float mark2;
    float mark3;
    float finalMark;
    float mark1Weight;
    float mark2Weight;
    float mark3Weight;
};
typedef struct Student student;
int getUserChoice(){
    int choice;
    printf("\n1-Read File");
    printf("\n2-Print the list of students");
    printf("\n3-Print the number of students - Calculate final mark for each student");
    printf("\n4-Report for subject: ");
    printf("\n5-Quit");
    printf("\nChoose: ");
    scanf("%d%*c", &choice);
    return choice;
}
int exist(char* filename){
    int existed = FALSE;
    FILE* f = fopen(filename, "r");
    if (f != NULL){
        existed = TRUE;
        fclose(f);
    }
    return existed;
}
void readFile(char* filename){
    if (exist(filename)==1) printf("The file is read successfully!\n");
    else printf("The file is not read successfully!\n");
}   
void parseLine(struct Student* student, char* line) {
    char* token;

    //ID
    token = strtok(line, "|");
    if (token != NULL) {
        strcpy(student->ID, token);
    }

    //NAMES
    token = strtok(NULL, "|");
    if (token != NULL) {
        strcpy(student->names, token);
    }

    //INITIALS
    token = strtok(NULL, "|");
    if (token != NULL) {
        strcpy(student->initials, token);
    }

    //MARK
    token = strtok(NULL, "|");
    if (token != NULL) {
        student->mark1 = atof(token);
    }

    token = strtok(NULL, "|");
    if (token != NULL) {
        student->mark2 = atof(token);
    }

    token = strtok(NULL, "|");
    if (token != NULL) {
        student->mark3 = atof(token);
    }
}
void processFile(struct Student student[], char* filename, int* studentCount){
    char line[100];
    *studentCount = 0;
    FILE *f = fopen(filename, "r");
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, "StudentCount") != NULL) {
            break;
        }
    }
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, "S|") != NULL) {
            parseLine(&student[*studentCount], line+2);
            (*studentCount)++;
        }
    }
    fclose(f);
}
void printStudents(struct Student student[], int studentCount) {
    printf("ID\t\tName\t\t   Initials    Mark1\t\tMark2\t\tMark3\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%s\t%s\t%s\t%.1f\t\t%.1f\t\t%.1f\n",
               student[i].ID,
               student[i].names,
               student[i].initials,
               student[i].mark1,
               student[i].mark2,
               student[i].mark3);
    }
}
int numberStudent(struct Student student[], char* filename){
    char line[100];
    int count=0;
    FILE *f = fopen(filename, "r");
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, "StudentCount") != NULL) {
            break;
        }
    }
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, "S|") != NULL) {
            count++;
        }
    }
    fclose(f);
    return count;
}
void calculateFinalMark(struct Student student[], int studentCount){
    int i;
    for (i=0; i<studentCount; i++){
        student[i].finalMark = student[i].mark1*20*0.01 + student[i].mark2*10*0.01 + student[i].mark3*70*0.01;
        printf("Final mark of student %d: %.1f\n", i+1, student[i].finalMark);
    }
}
void highestMark(struct Student student[], int studentCount){
    float max = student[0].finalMark;
    int i;
    for (i=1; i<studentCount; i++){
        if (student[i].finalMark > max) max = student[i].finalMark;
    }
    printf("The highest mark is %.1f", max);
}
void lowestMark(struct Student student[], int studentCount){
    float min = student[0].finalMark;
    int i;
    for (i=1; i<studentCount; i++){
        if (student[i].finalMark < min) min = student[i].finalMark;
    }
    printf("The lowest mark is %.1f", min);
}
void averageMark(struct Student student[], int studentCount){
    float average, count, sum;
    int i;
    for(i=0; i<studentCount; i++){
        sum+=student[i].finalMark;
        count++;
    }
    average = sum / count;
    printf("The average is %.1f", average);
}
void Histogram(struct Student student[], int studentCount){
     int count0_9 = 0, count10_19 = 0, count20_29 = 0, count30_39 = 0, count40_49 = 0,
        count50_59 = 0, count60_69 = 0, count70_79 = 0, count80_89 = 0, count90_100 = 0;
    int i;
    for (i = 0; i < studentCount; i++) {
        if (student[i].finalMark >= 0 && student[i].finalMark <= 9) {
            count0_9++;
        } else if (student[i].finalMark >= 10 && student[i].finalMark <= 19) {
            count10_19++;
        } else if (student[i].finalMark >= 20 && student[i].finalMark <= 29) {
            count20_29++;
        } else if (student[i].finalMark >= 30 && student[i].finalMark <= 39) {
            count30_39++;
        } else if (student[i].finalMark >= 40 && student[i].finalMark <= 49) {
            count40_49++;
        } else if (student[i].finalMark >= 50 && student[i].finalMark <= 59) {
            count50_59++;
        } else if (student[i].finalMark >= 60 && student[i].finalMark <= 69) {
            count60_69++;
        } else if (student[i].finalMark >= 70 && student[i].finalMark <= 79) {
            count70_79++;
        } else if (student[i].finalMark >= 80 && student[i].finalMark <= 89) {
            count80_89++;
        } else if (student[i].finalMark >= 90 && student[i].finalMark <= 100) {
            count90_100++;
        }
    }
    printf("0-9  : ");
    for (int i = 0; i < count0_9; i++) {
        printf("*");
    }
    printf("\n");

    printf("10-19: ");
    for (int i = 0; i < count10_19; i++) {
        printf("*");
    }
    printf("\n");

    printf("20-29: ");
    for (int i = 0; i < count20_29; i++) {
        printf("*");
    }
    printf("\n");

    printf("30-39: ");
    for (int i = 0; i < count30_39; i++) {
        printf("*");
    }
    printf("\n");

    printf("40-49: ");
    for (int i = 0; i < count40_49; i++) {
        printf("*");
    }
    printf("\n");

    printf("50-59: ");
    for (int i = 0; i < count50_59; i++) {
        printf("*");
    }
    printf("\n");

    printf("60-69: ");
    for (int i = 0; i < count60_69; i++) {
        printf("*");
    }
    printf("\n");

    printf("70-79: ");
    for (int i = 0; i < count70_79; i++) {
        printf("*");
    }
    printf("\n");

    printf("80-89: ");
    for (int i = 0; i < count80_89; i++) {
        printf("*");
    }
    printf("\n");

    printf("90-100: ");
    for (int i = 0; i < count90_100; i++) {
        printf("*");
    }
    printf("\n");
}
int main() {
    int userChoice;
    struct Student student[100];
    int studentCount;
    char filename[] = "CSEPRG.txt";
    do{
        userChoice = getUserChoice();
        switch (userChoice)
        {
        case 1: 
            readFile(filename);    
            break;
        case 2:
            processFile(student, filename, &studentCount);
            printStudents(student, studentCount);
            break;
        case 3:
            printf("The number of student in the list is %d\n", numberStudent(student, filename));
            calculateFinalMark(student, studentCount);
            break;
        case 4:
            highestMark(student, studentCount); printf("\n");
            lowestMark(student, studentCount); printf("\n");
            averageMark(student, studentCount); printf("\n");
            Histogram(student, studentCount);
            break;
        case 5:
            break;
        }
    }
    while (userChoice > 0 && userChoice < 5);
    fflush(stdin);
    return 0;
}
