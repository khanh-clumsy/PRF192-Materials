#include <stdio.h>
int main(){
	char c1 = 65, c2;
	int i1 = 25, i2;
	printf("Size of int: %d, char: %d byte(s)\n", sizeof(int), sizeof(char));
	i2 = i1;
	printf("i2 = %d\n", i2);
	i2 = c1;
	printf("i2 = %d\n", i2);
	c2 = i1;
	printf("c2 = %d\n", c2);
	getchar();
	return 0;
}
