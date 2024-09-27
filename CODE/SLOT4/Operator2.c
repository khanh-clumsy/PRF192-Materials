#include <stdio.h>
int main(){
	int mark;
	printf("Your mark:");
	scanf("%d", &mark);
	printf(mark>8? "500000":"0");
	getchar();
	getchar();
	return 0;
}
