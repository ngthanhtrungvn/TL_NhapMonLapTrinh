#include <stdio.h>
#include <conio.h>
int xuatSoChinhPhuongDauTien(int n);
void main()
{
	int n;
	int dem = 0;
	int i = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	while (dem < n)
	{
		if (xuatSoChinhPhuongDauTien(i) == 1)
		{
			printf("%d ", i);
			dem++;
		}
		i++;
	}
	getch();
}
int xuatSoChinhPhuongDauTien(int x)
{
	for (int i = 1; i * i <= x; i++)
	{
		if (i * i == x)
		{
			return 1;
		}
	}
	return 0;
}