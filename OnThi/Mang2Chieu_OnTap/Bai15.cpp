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

int kiemTraDayCapSoCong(int a[][100], int m, int n) {
	for (int j = 0; j < n; j++) {
		int commonDifference = a[1][j] - a[0][j];  // Tính công sai của cấp số cộng
		for (int i = 1; i < m - 1; i++) {
			if (a[i + 1][j] - a[i][j] != commonDifference) {
				return 0;  // Cột không tạo thành dãy cấp số cộng
			}
		}
	}
	return 1;  // Tất cả các cột tạo thành dãy cấp số cộng
}


void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	if (kiemTraDayCapSoCong(a, m, n))
	{
		printf("Mang a la day cap so cong theo chieu tu trai qua phai tu tren xuong duoi.");
	}
	else
	{
		printf("Mang khong la day cap so cong");
	}
	getch();
}