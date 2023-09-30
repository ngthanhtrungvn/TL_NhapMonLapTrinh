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

int kiemTraDuongCheoPhuGiamDan(int a[][100], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i][n - 1 - i] <= a[i + 1][n - 2 - i]) {
			return 0;  // Đường chéo phụ không giảm dần
		}
	}
	return 1;  // Đường chéo phụ giảm dần
}


void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	if (kiemTraDuongCheoPhuGiamDan(a, n)) {
		printf("Ma tran vuong a co duong cheo phu giam dan.\n");
	}
	else {
		printf("Ma tran vuong a khong co duong cheo phu giam dan.\n");
	}
	getch();
}