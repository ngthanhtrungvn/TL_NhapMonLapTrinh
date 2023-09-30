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

int timX(int a[][100], int m, int n, int x) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				return 1;
			}
		}
	}
	return 0;
}

void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	int x;
	printf("Nhap x can tim: ");
	scanf("%d", &x);
	if (timX(a,m,n,x) == 1)
	{
		printf("Tim thay so %d trong mang", x);
	}
	else
	{
		printf("Khong tim thay so %d trong mang", x);
	}
	getch();

}