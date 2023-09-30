#include <stdio.h>
#include <conio.h>
#include <math.h>
int kiemtraSoNguyenTo(int x);
void main()
{
	int x;
	printf("nhap so nguyen x: ");
	scanf("%d", &x);
	int kq = kiemtraSoNguyenTo(x);
	if (kq == 1)
	{
		printf("%d la so nguyen to", x);
	}
	else
	{
		printf("%d khong la so nguyen to", x);
	}
	getch();

}
int kiemtraSoNguyenTo(int x)
{
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrtf((float)x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}