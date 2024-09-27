#include <stdio.h>
int main(){
	int S=0;
	int i;
	for (i=0; i<5; i++)
		{if (i%2==1) break;
		else S+=i;
		}
	printf("\nS=%d", S);
	for (i=0; i<5; i++)
		{if (i%2==1) continue;
		S+=i;
		}
	printf("\nS=%d", S);
	getchar();
	return 0;	
	
}
