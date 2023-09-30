#include <stdio.h>
#include <conio.h>
void main()
{
	int chon;
	do
	{
		printf("=====================MENU======================");
		printf("\n 1.Cong");
		printf("\n 2.Tru");
		printf("\n 3.Nhan");
		printf("\n 4.Chia");
		printf("\nBan chon chuc nang nao: ");
		scanf("%d", &chon);
		int a, b;
		printf("Nhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
		switch (chon)
		{
		case 1:
		{
			printf("%d", a + b);

		}break;
		case 2:
		{
			printf("%d", a - b);
		}break;
		case 3:
		{
			printf("%d", a * b);
		}break;
		case 4:
		{
			printf("%.2f", a / (float)b);
		}break;
		default:
			break;
		}
	} while (chon != 0);
	getch();
}