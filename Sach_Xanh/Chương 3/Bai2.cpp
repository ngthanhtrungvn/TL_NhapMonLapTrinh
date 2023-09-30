#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	int chon;
	printf("-------------------MENU------------------");
	printf("\n1. Ham if");
	printf("\n2. Bieu thuc dieu kien");
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	switch (chon)
	{
	case 1: {
		int max = a > b ? a : b;
		printf("Max = %d", max);
	}break;
	case 2: {
		int max = a;
		if (b > max)
		{
			max = b;
		}
		printf("Max = %d", max);
	}break;
	default:
		break;
	}
	
	
	getch();
}