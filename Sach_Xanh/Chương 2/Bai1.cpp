#include <stdio.h>
#include <conio.h>
void main()
{
	float a, b;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("tong: %.2f", a + b);
	printf("\nhieu: %.2f", a - b);
	printf("\ntich: %.2f", a * b);
	printf("\nthuong: %.2f", (float)a / b);
	getch();
}