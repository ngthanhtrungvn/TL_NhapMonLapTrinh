#include<conio.h>
#include<stdio.h>

void nhapMangToanChan(int a[][100], int &m, int &n) {
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
			if (a[i][j] % 2 != 0)
			{
				printf("Nhap lai!\n");
			}
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

void main() {
	int a[100][100], m, n;
	nhapMangToanChan(a, m, n);
	xuatMang(a, m, n);
	getch();

}