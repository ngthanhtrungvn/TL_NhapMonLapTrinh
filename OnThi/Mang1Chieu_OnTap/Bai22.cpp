#include<conio.h>
#include<stdio.h>
#include<math.h>

void nhapMangA(int a[], int& nA) {
	printf("Nhap so luong phan tu cua mang A: ");
	scanf("%d", &nA);
	for (int i = 0; i < nA; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}

}

void nhapMangB(int b[], int& nB) {
	printf("Nhap so luong phan tu cua mang B: ");
	scanf("%d", &nB);
	for (int i = 0; i < nB; i++)
	{
		printf("Nhap b[%d]: ", i);
		scanf("%d", &b[i]);
	}

}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

}

void tronMang(int a[], int nA, int b[], int nB, int c[], int& nC) {
	nC = 0; // Khởi tạo số phần tử của mảng kết quả là 0
	int i = 0, j = 0;

	while (i < nA && j < nB) {
		c[nC] = a[i] + b[j]; // Tính tổng và thêm vào mảng kết quả
		nC++; // Tăng số phần tử của mảng kết quả lên 1

		i++; // Di chuyển con trỏ của mảng A
		j++; // Di chuyển con trỏ của mảng B
	}

	// Sao chép phần tử còn lại của mảng A (nếu có)
	while (i < nA) {
		c[nC] = a[i];
		nC++;
		i++;
	}

	// Sao chép phần tử còn lại của mảng B (nếu có)
	while (j < nB) {
		c[nC] = b[j];
		nC++;
		j++;
	}
}

void main() {
	int a[100], nA;
	int b[100], nB;
	int c[100], nC;
	nhapMangA(a, nA);
	xuatMang(a, nA);
	printf("\n");
	nhapMangB(b, nB);
	xuatMang(b, nB);
	printf("\nMang sau khi tron: ");
	tronMang(a, nA, b, nB, c, nC);
	xuatMang(c, nC);
	getch();
}