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

void xoaK(int a[], int& n, int k) {
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void timMin(int a[], int &n) {
	int min = a[0];
	int viTriMin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			viTriMin = i;
		}
	}
	xoaK(a, n, viTriMin - 1);

}


void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	timMin(a, n);
	printf("\n");
	xuatMang(a, n);
	getch();
}