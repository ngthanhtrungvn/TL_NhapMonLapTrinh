#include<conio.h>
#include<stdio.h>
#include<math.h>

void nhapMang(int a[][100], int& m, int& n) {
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


void timSoLonThu2(int a[][100], int m, int n) {
	int max = a[0][0];
	int secondMax = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				secondMax = max;
				max = a[i][j];
			}
			else if (a[i][j] > secondMax && a[i][j] < max)
			{
				secondMax = a[i][j];
			}
		}
	}
	printf("So lon thu 2 la: %d", secondMax);
}


void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	timSoLonThu2(a, m, n);
	getch();

}