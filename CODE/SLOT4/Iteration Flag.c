#include <stdio.h>
int main(){
	int i, total = 0, value;
	int keepreading =  1;
	for (i=0; i<10; i++){
		printf("Enter an integer (0 to stop): ");
		scanf("%d", &value);
		if (value == 0){
			keepreading = 0;
		}
		else
			total += value;
	}
	printf("The total entered is %d\n", total);
	return 0;
}
