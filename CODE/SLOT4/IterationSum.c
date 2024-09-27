#include <stdio.h>
int main(){
	int n, i;
	printf("n=");
	scanf("%d", &n);
	int sum1=0;
	for (i=0; i<=n; i++) sum1 += i;
	printf("\nsum1 = %d", sum1);
	int sum2;
	for (sum2=0, i=1; i<=n; sum2+=i, i++);
	printf("\nsum2 = %d", sum2);
	int sum3=0;
	i=1;
	for(; i<=n; )
	{
		sum3+=i;
		i++;
	}
	printf("\nsum3 = %d", sum3);
	getchar(); getchar();
	return 0;
}
