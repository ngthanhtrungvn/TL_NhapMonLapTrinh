#include<conio.h>
#include<stdio.h>
#include<limits.h>

void nhapMang(int a[], int& n) {
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}

}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

}

void xoaLonNhatDauTien(int a[], int& n) {

	int maxIndex = 0;
	int maxValue = a[0];

	// Find the index of the maximum element
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) {
			maxIndex = i;
			maxValue = a[i];
		}
	}

	// Remove the first occurrence of the maximum element
	for (int i = maxIndex; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}


void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	xoaLonNhatDauTien(a, n);
	printf("\n");
	xuatMang(a, n);
	getch();
}