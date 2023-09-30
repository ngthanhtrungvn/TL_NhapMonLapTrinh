#include <stdio.h>
#include <conio.h>
#include <math.h>
int kiemTraSoChinhPhuong(int x);
void main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	int kq = kiemTraSoChinhPhuong(x);
	if (kq == 1)
	{
		printf("%d la so chinh phuong", x);
	}
	else
	{
		printf("%d khong la so chinh phuong", x);
	}
	getch();
}
int kiemTraSoChinhPhuong(int x)
{
	for (int i = 0; i * i <= x; i++)
	{
		if (i * i == x)
		{
			return 1;
		}
	}
	return 0;
}



