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
			int r = rand() % 11;
			printf("a[%d][%d] = %d\n", i, j, r);
			a[i][j] = r;
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

int tinhTich(int a[][100], int m, int j)
{
	int s = 1;
	for (int i = 0; i < m; i++)
		s *= a[i][j];
	return s;
}

void timCotMin(int a[][100], int m, int n)
{
	int min = tinhTich(a, m, 0);
	for (int i = 1; i < n; i++)
	{
		if (tinhTich(a, m, i) < min)
		{
			min = tinhTich(a, m, i);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (tinhTich(a, m, i) == min)
		{
			printf("Cot co tich nho nhat la %d\n", i);
		}
	}
}
void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	timCotMin(a, m, n);
	getch();
}