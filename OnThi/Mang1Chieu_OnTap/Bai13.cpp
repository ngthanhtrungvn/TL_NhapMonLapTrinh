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

void timMax(int a[], int &n) {
	int max = a[0];
	int viTriMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	xoaK(a, n, viTriMax + 1);
}



void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	timMax(a, n);
	printf("\n");
	xuatMang(a, n);
	getch();
}