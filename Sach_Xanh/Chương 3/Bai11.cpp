#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main()
{
	int chon;
	do
	{
		printf("=====================MENU========================\n");
		printf("\n 1.Tinh chu vi va dien tich HCN\n");
		printf("\n 2.Tinh chu vi va dien tich HV\n");
		printf("\n 3.Tinh chu vi dien tich HT\n");
		printf("\n Ban chon chuc nang nao: ");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
			int d, r;
			printf("Nhap d: ");
			scanf("%d", &d);
			printf("Nhap r: ");
			scanf("%d", &r);
			int CV = (d + r) * 2;
			int DT = d * r;
			printf("Chu vi HCN la: %d", CV);
			printf("\nDien tich HCN la: %d", DT);
		}break;
		case 2:
		{
			int a;
			printf("Nhap a: ");
			scanf("%d", &a);
			int CV = a * 4;
			int DT = a * a;
			printf("Chu vi HV la: %d", CV);
			printf("\nDien tich HV la: %d", DT);

		}break;
		case 3:
		{
			float r;
			printf("nhap r: ");
			scanf("%f", &r);
			float CV = 2 * r * PI;
			float DT = r * r * PI;
			printf("Chu vi HT la: %.2f", CV);
			printf("\nDien tich HT la: %.2f", DT);

		}break;
		default:
			break;
		}
	} while (chon != 0);
	getch();
}