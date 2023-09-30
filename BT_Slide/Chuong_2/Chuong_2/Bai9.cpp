#include<conio.h>
#include<stdio.h>
void main() {
	int a, b, c, d, e;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	printf("Nhap d: ");
	scanf("%d", &d);
	printf("Nhap e: ");
	scanf("%d", &e);
	float tbc = (a + b + c + d + e) / 5;
	printf("\Trung binh cong: %.2f", tbc);
	getch();
}