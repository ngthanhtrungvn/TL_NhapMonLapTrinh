#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	int max = a;
	if (b > max)
	{
		max = b;
	}
	printf("Max: %d", max);
	getch();
}
