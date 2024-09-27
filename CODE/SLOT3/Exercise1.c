#include <stdio.h>
int main(){
	int a, b;
	float c, d;
	double e, f;
	printf("Nhap vao 2 so nguyen:");
	scanf("%d%d", &a, &b);
	printf("Nhap vao 2 so thuc:");
	scanf("%f%f", &c, &d);
	printf("Nhap vao 2 so double: ");
	scanf("%lf%lf", &e, &f);
	printf("Value: %d, address: %u\n", a, &a);
	printf("Value %d, address: %u\n", b, &b);
	printf("Value %f, address: %u\n", c, &c);
	printf("Value %f, address: %u\n", d, &d);
	printf("Value %lf, address: %u\n", e, &e);
	printf("Value %lf, address: %u\n", f, &f);
	return 0;
} 
