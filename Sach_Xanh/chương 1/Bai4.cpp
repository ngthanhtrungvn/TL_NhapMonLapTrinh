#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("tong: %d",a + b);
	printf("\nhieu: %d",a - b);
	printf("\ntich: %d", a * b);
	printf("\nthuong: %.2f",(float)a/b);
	getch();
}