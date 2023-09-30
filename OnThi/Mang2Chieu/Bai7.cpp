#include<conio.h>
#include<stdio.h>
#include<math.h>

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

int kTraSNT(int x) {
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(float(x)); i++)
	{
		if (x%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void xuatMang(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (kTraSNT(a[i][j]) == 1)
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
	xuatMang(a, m, n);
	getch();

}