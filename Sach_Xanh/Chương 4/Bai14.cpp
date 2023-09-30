#include <stdio.h>
#include <conio.h>
int xuatRa3ChuSo();
void main()
{
	xuatRa3ChuSo();
	getch();
}
void xuatRa3ChuSo()
{
	for (int i = 100; i < 1000; i++)
	{
		int hangTram = i / 100;       // Chữ số hàng trăm
		int hangChuc = (i / 10) % 10; // Chữ số hàng chục
		int donVi = i % 10;           // Chữ số đơn vị
		if (hangTram != hangChuc && hangTram != donVi && hangChuc != donVi)
		{
			printf("%d\t", i);
		}
	}
}
