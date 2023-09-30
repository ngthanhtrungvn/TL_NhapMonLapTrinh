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

void xuatPhanTuThuocDuongCheoSongSongVoiDCC(int a[][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf("%d ", a[i + j][j]); 
		}
		printf("\n");
	}

}

void xuatPhanTuThuocDuongCheoSongSongVoiDCP(int a[][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i - j][j]);
		}
		printf("\n");
	}

}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	xuatPhanTuThuocDuongCheoSongSongVoiDCC(a, n);
	xuatPhanTuThuocDuongCheoSongSongVoiDCP(a, n);
	getch();

}