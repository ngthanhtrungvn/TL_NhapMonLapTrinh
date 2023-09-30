#include <stdio.h>
#include <conio.h>
void main()
{
	float a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (a == 0 && b == 0)
	{
		printf("Phuong trinh vo so nghiem");
	}
	if (a == 0 && b != 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	if (a != 0)
	{
		float x = -b / (float)a;
		printf("x = %.2f", x);
	}
	getch();

}