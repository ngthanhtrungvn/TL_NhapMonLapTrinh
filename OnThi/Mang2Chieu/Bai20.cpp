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


int kiemTraDuongCheoTangDan(int a[][100], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i][i] >= a[i + 1][i + 1]) {
			return 0; 
		}
	}
	return 1;
}


void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	if (kiemTraDuongCheoTangDan(a, n) == 1)
	{
		printf("Duong cheo chinh tang dan");
	}
	else
	{
		printf("Duong cheo chinh khong tang dan");
	}
	getch();

}