#include <stdio.h>
int main(){
	short n = 12, m = 8, t = 2, k = -1;
	printf("%d, %d, %d\n", n&m, n|m, n^m);
	printf("%d, %d\n", n<<1, n<<t);
	printf("n = %d\n", n);
	printf("%d, %d\n", n>>1, k>>t);
	printf("%d\n", ~t);
	getchar();
	return 0;
}
