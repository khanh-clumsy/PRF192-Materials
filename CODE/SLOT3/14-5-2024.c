#include <stdio.h>
#include <conio.h>
#define PI 3.141592
const PI1 = 3.141593;
const double PI2 = 3.141593;
const MAXINT1 = 12;
const int MAXINT2 = 10;
const MAXCHAR1 = 'Z';
const char MAXCHAR2 = 'A';
int main(){
	printf("%d\n", PI*3*3);
	printf("Non-type Constant: PI1: %d bytes\n", sizeof(PI1));
	printf("Non-type Constant: MAXINT1: %d bytes\n", sizeof(MAXINT1));
	printf("Non-type Constant: MAXCHAR1: %d bytes\n", sizeof(MAXCHAR1));
	printf("Type specified Constant: PI2: %d bytes\n", sizeof(PI2));
	printf("Type specified Constant: MAXINT2: %d bytes\n", sizeof(MAXINT2));
	printf("Type specified Constant: MAXCHAR2: %d bytes\n", sizeof(MAXCHAR2));
	getch();
}
