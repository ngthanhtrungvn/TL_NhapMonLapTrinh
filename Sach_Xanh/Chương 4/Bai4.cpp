#include <stdio.h>
#include <conio.h>
int kiemTraSoHoanThien(int x);
void main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	int kq = kiemTraSoHoanThien(x);
	if (kq == 1)
	{
		printf("%d la so hoan thien", x);
	}
	else
	{
		printf("%d khong la so hoan thien", x);
	}
	getch();
}
int kiemTraSoHoanThien(int x)
{
	int sum = 0;
	for (int i = 1; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			sum += i;
		}
	}
	if (sum == x)
	{
		return 1;
	}
	return 0;
}