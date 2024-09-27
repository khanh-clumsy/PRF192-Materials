#include <stdio.h>
#define PI 3.14159
int main(){
	double radius;
	printf("Enter radius: ");
	scanf("%lf", &radius);
	printf("The area of your circle is: %lf\n", PI * radius * radius);	
}
