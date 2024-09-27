#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, x1, x2, delta;
    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0 ");
    printf("\nNhap gia tri cua a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0){
    	printf("\nHe so a phai khac 0 !");
	}
	else {
		delta = pow(b, 2) - 4*a*c;
		printf("Delta = %.2f", delta);
		if (delta > 0){
			x1 = (-b - sqrt(delta))/ 2*a;
			x2 = (-b + sqrt(delta))/ 2*a;
			printf("\nVay phuong trinh co 2 nghiem phan biet x1 x2 la : x1 = %.2f, x2 = %.2f", x1, x2);
		}
		else if (delta == 0){
			x1 = x2 = -b / 2*a;
			printf("\nVay phuong trinh co nghiem kep x1 = x2 = %f", x1);
		}
		else {
			printf("\nVay phuong trinh vo nghiem");
		}
		}
	return 0;
	}
	

	


