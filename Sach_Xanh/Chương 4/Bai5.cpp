#include <stdio.h>
#include <conio.h>
#include <math.h>
int xuatSNTDauTien(int n);
void main()
{
	int n;
	int dem = 0;
	int i = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while (dem < n)
	{
		if (xuatSNTDauTien(i) == 1)
		{
			printf("%5d", i);
			dem++;
		}
		i++;
	}
	getch();
}
int xuatSNTDauTien(int x)
{
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt((float)x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
