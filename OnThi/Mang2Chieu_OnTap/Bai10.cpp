#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void nhapMang(int a[][100], int& m, int& n) {
	printf("Nhap so dong: ");
	scanf("%d", &m);
	printf("Nhap so cot: ");
	scanf("%d", &n);
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Nhap a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

}

void xuatMang(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void xuatTamGiacTrenDCP(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j <= n - 1)
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}

int tinhTongTamGiacTrenDCP(int a[][100], int m, int n) {
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j <= n - 1)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	xuatTamGiacTrenDCP(a, m, n);
	printf("\nTinh tong cac phan tu thuoc tam giac tren: %d", tinhTongTamGiacTrenDCP(a, m, n));
	getch();
}