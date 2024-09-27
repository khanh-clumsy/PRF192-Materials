#include <stdio.h>
int n;
int main(){
	int m;
	printf("Var. n, add: %u\n", &n);
	printf("Var. m, add: %u\n", &m);
	printf("Main code, add:%u\n", &main);
	printf("Enter 2 integers: ");
	scanf("%d%d", &n, &m);
	printf("Values entered: n=%d, m=%d\n", n, m);
	getchar();
	getchar();
	return 0;
	
}

