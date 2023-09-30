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

void xuatCotK(int a[][100], int m, int n, int k) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == k)
			{
				printf("%d ", a[i][k]);
			}
		}
		printf("\n");
	}
}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	int k;
	printf("Nhap cot k: ");
	scanf("%d", &k);
	xuatCotK(a, m, n, k);
	getch();
}