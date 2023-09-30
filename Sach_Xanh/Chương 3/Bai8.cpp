#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	float denta = b * b - 4 * a * c;
	if (denta < 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	if (denta == 0)
	{
		float x = -b / (float)2 * a;
		printf("Phuong trinh co nghiem kep x = %.2f", x);
	}
	if (denta > 0)
	{
		float x1 = (-b + sqrt(denta)) / (float)2 * a;
		float x2 = (-b - sqrt(denta)) / (float)2 * a;
		printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f x2 = %.2f", x1, x2);
	}
	getch();


}