#include <stdio.h>
#include <conio.h>
void xuatRaTuanNgayLe(int n);
void main()
{
	int N;
	do
	{
		printf("Nhap so nguyen N: ");
		scanf("%d", &N);
	} while (N < 0);
	xuatRaTuanNgayLe(N);
	getch();
}
void xuatRaTuanNgayLe(int n)
{
	int tuan, ngay;
	tuan = n / 7;
	ngay = n % 7;
	printf("%d tuan va %d ngay le ", tuan, ngay);
}
