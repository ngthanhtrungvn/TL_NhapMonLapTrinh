#include <stdio.h>
#include <conio.h>
void main()
{
	long N;
	printf("Nhap vao so nguyen lon N: ");
	scanf("%ld", &N);
	int dau;  //đầu
	int max = 0;
	int tong = 0;
	int dem = 0;
	while (N != 0)
	{
		dau = N % 10;
		tong = tong + dau;
		N = N / 10;
		if (max < dau)
		{
			max = dau;
		}
		dem++;
	}
	printf("So dau tien cua N la: %d\n", dau);
	printf("So lon nhat trong cac chu so cua N la: %d", max);
	printf("\nTong cac chu so cua N la: %d", tong);
	printf("\nSo chu so cua N la: %d", dem);
	getch();

}