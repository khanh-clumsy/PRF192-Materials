#include <stdio.h>
int main(){
	int N, t;
	scanf("%d", &N);
	if (N<100) t = 950;
	else if ((N>=100) && (N<150)) t = 1250;
	else if ((N>=150) && (N<200)) t = 1350;
	else t = 1550;
	printf("%d", t);
	
}
