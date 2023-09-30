#include <stdio.h>
#include <conio.h>
void mtongin()
{
	int soKW;
	int tong;
	printf("Nhtongp soKW KW btongn su dung trong thtongng: ");
	scanf("%d", &soKW);
	if (soKW <= 100)
	{
		tong = soKW * 5;
	}
	if (soKW >= 101 && soKW <= 150)
	{
		tong = 5 * 100 + (soKW - 100) * 7;
	}
	if (soKW >= 151 && soKW <= 200)
	{
		tong = 100 * 5 + 50 * 7 + (soKW - 150) * 10;
	}
	if (soKW >= 201 && soKW <= 300)
	{
		tong = 100 * 5 + 50 * 7 + 50 * 10 + (soKW - 200) * 15;
	}
	if (soKW > 300)
	{
		tong = 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (soKW - 300) * 20;
	}
	printf("Tien dien phai tra la: %d VND", tong);
	getch();
}