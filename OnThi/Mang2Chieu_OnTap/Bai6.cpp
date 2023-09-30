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

int tinhTBCCacPhanTuChanThuocDongLe(int a[][100], int m, int n) {
	int dem = 0;
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0 && i % 2 != 0)
			{
				sum += a[i][j];
				dem++;
			}
		}
		printf("\n");
	}
	return sum / (float)dem;
}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	printf("Trung binh cong cac phan tu chan thuoc dong le la: %d", tinhTBCCacPhanTuChanThuocDongLe(a, m, n));
	getch();
}