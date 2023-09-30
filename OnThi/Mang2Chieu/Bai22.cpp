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


int kiemTraDuongBienAm(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
				if (a[i][j] >= 0) {
					return 0;  
				}
			}
		}
	}
	return 1;  
}


void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	if (kiemTraDuongBienAm(a,m ,n) == 1)
	{
		printf("Duong bien toan am");
	}
	else
	{
		printf("Duong bien khong am");
	}
	getch();

}