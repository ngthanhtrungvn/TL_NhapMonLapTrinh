#include <stdio.h>
#include <conio.h>
int kiemtraChanLe(int x);
void main()
{
	int x;
	printf("Nhap so nguyen x: ");
	scanf("%d", &x);
	if (kiemtraChanLe(x) == 1)
	{
		printf("%d la so chan", x);
	}
	else
	{
		printf("%d la so le", x);
	}
	getch();
}
int kiemtraChanLe(int x)
{
	if (x % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}