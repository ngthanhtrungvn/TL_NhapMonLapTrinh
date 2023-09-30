#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (a % b == 0)
	{
		printf("%d la boi so cua %d", a, b);
	}
	else
	{
		printf("%d khong la boi cua %d", a, b);
	}
	getch();
}