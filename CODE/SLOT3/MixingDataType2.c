#include <stdio.h>
int main(){
	int n = 256, m;
	char c;
	c = (char)n;
	printf("c = %d\n", c);
	double x = 3.251;
	n = x;
	m = (int)x;
	printf("n = %d, m = %d\n", n, m);
	getchar();
	return 0;
}
