#include <stdio.h>
#include <conio.h>
void main()
{
	float gv, gr;
	do
	{
		printf("Nhap gio vao: ");
		scanf("%f", &gv);
		printf("Nhap gio ra: ");
		scanf("%f", &gr);
	} while (gv < 10 || gr>24 || gr < gv);
	if (gv < 17 && gr < 17)
	{
		printf("Tien phai tra la: %.2f VND\n", (gr - gv) * 20.000);
	}
	else
	{
		if (gv > 17 && gr > 17)
		{
			printf("Tien phai tra la: %.2f VND\n", (gr - gv) * 45.000);
		}
		else
		{
			printf("Tien phai tra la: %.2f VND\n", (17 - gv) * 20.000 + (gr - 17) * 45.000);
		}
	}
	getch();

}