#include <conio.h>
#include <stdio.h>
void main()
{
	int x, y;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap y: ");
	scanf("%d", &y);
	int m;
	m = x * y;
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	printf("UCLN la %d", x);
	printf("\nBCNN la %d", m / x);
	getch();



}