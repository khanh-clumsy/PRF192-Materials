#include <stdio.h>
int main(){
	int code;
	for (code=0; code<256; code++)
		printf("%c, %3d, %3o, %3X\n", code, code, code, code);
}
