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

void xuatDongChanCotLe(int a[][100], int m, int n) {
	for (int i = 0; i < m; i+=2)
	{
		for (int j = 1; j < n; j+=2)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void xuatDongLeCotChan(int a[][100], int m, int n) {
	for (int i = 1; i < m; i += 2)
	{
		for (int j = 0; j < n; j += 2)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatDongChanCotLe(a, m, n);
	xuatDongLeCotChan(a, m, n);
	getch();

}