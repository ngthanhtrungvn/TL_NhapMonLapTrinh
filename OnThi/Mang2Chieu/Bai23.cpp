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


int kiemTraTamGiacDuoiChan(int a[][100], int n) {
	// Kiểm tra tam giác dưới của đường chéo chính
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i][j] % 2 != 0) {
				return 0;  // Có ít nhất một phần tử lẻ trong tam giác dưới
			}
		}
	}
	return 1;  // Tất cả các phần tử trong tam giác dưới đều chẵn
}



void main() {
	int a[100][100], m, n;
	nhapMang(a, m, n);
	xuatMang(a, m, n);
	if (kiemTraTamGiacDuoiChan(a, n) == 1)
	{
		printf("Tam giac duoi chan");
	}
	else
	{
		printf("Tam giac duoi khong chan");
	}
	getch();

}