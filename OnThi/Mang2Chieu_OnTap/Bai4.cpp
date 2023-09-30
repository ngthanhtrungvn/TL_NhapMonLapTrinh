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

int tinhTong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += a[i];
	return s;
}
void timDongMaxTong(int a[][100], int m, int n)
{
	int max = tinhTong(a[0], n);
	for (int i = 1; i < m; i++)
		if (tinhTong(a[i], n) > max)
			max = tinhTong(a[i], n);
	for (int i = 0; i < m; i++)
		if (tinhTong(a[i], n) == max)
			printf("Dong co tong lon nhat %d\n", i);
}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	timDongMaxTong(a, m, n);
	getch();
}