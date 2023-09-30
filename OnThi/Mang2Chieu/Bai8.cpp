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

void xuat4DuongBien(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
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
	xuat4DuongBien(a, m, n);
	getch();

}