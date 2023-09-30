#include <stdio.h>
#include <conio.h>
void docSo(int n);
void main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
	} while (N <= 0 || N >= 1000);
	docSo(N);
	getch();
}
void docSo(int n)
{
	int dv = n % 10;
	n = n / 10;
	int chuc = n % 10;
	int tram = n / 10;
	switch (tram)
	{
	case 1:printf("Mot tram "); break;
	case 2:printf("Hai tram "); break;
	case 3:printf("Ba tram "); break;
	case 4:printf("Bon tram "); break;
	case 5:printf("Nam tram "); break;
	case 6:printf("Sau tram "); break;
	case 7:printf("Bay tram "); break;
	case 8:printf("Tam tram "); break;
	case 9:printf("Chin tram "); break;
	}
	switch (chuc)
	{
	case 1:printf("muoi "); break;
	case 2:printf("hai muoi "); break;
	case 3:printf("ba muoi "); break;
	case 4:printf("bon muoi "); break;
	case 5:printf("nam muoi "); break;
	case 6:printf("sau muoi "); break;
	case 7:printf("bay muoi "); break;
	case 8:printf("tam muoi "); break;
	case 9:printf("chin muoi "); break;
	}
	switch (dv)
	{
	case 1:printf("mot "); break;
	case 2:printf("hai "); break;
	case 3:printf("ba "); break;
	case 4:printf("bon "); break;
	case 5:printf("nam "); break;
	case 6:printf("sau "); break;
	case 7:printf("bay "); break;
	case 8:printf("tam "); break;
	case 9:printf("chin "); break;
	}
}