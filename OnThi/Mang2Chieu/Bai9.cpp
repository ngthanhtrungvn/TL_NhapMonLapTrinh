#include<conio.h>
#include<stdio.h>

void nhapMang(int a[][100], int &m, int &n) {
	printf("Nhap so dong: ");
	scanf("%d", &m);
	printf("Nhap so cot: ");
	scanf("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatPhanTuThuocDCC(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}

}

void xuatPhanTuThuocDCP(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j == n - 1)
			{
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}

}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatPhanTuThuocDCC(a, m, n);
	xuatPhanTuThuocDCP(a, m, n);
	getch();

}