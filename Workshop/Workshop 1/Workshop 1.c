#include <stdio.h>

int n = 4;
double x = 3.0;
char c1 = 'E';

int main(){
	int m = 6;
	short s = 3;
	long L = 5;
	float y = 5.5;
	
	printf("Code of main: %u\n", &main);
	printf("Variable n, add: %u, memory size: %d\n", &n, sizeof(n));
	printf("Variable x, add: %u, memory size: %d\n", &x, sizeof(x));
	printf("Variable c1, add: %u, memory size: %d\n", &c1, sizeof(c1));
	printf("Variable m, add: %u, memory size: %d\n", &m, sizeof(m));
	printf("Variable s, add: %u, memory size: %d\n", &s, sizeof(s));
	printf("Variable L, add: %u, memory size: %d\n", &L, sizeof(L));
	printf("Variable y, add: %u, memory size: %d\n", &y, sizeof(y));
	return 0;
}


