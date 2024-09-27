#include <stdio.h>
#define ENTER 10
int main(){
	//Khai bao bien
	int noLetters, noDigits, noOthers;
	char c;
	noDigits = noLetters = noOthers = c = 0;
	printf("Enter a string: ");
	while (c!=ENTER){
		c = getchar();
		if (c>'0' && c<='9') noDigits++;
		else if ((c>='a' && c<='z') || (c>='A' && c<='Z')) noLetters++;
		else noOthers++;
	}
	printf("Digits: %d, Letters: %d, Others: %d", noDigits, noLetters, noOthers);
}
