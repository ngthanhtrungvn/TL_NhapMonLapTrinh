#include<conio.h>
#include<stdio.h.>

void nhapMang(int a[], int& n)
{
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

void xoaX(int a[], int &n, int k) {
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	int k;
	printf("Nhap vi tri can xoa: ");
	scanf("%d", &k);
	xoaX(a, n, k);
	xuatMang(a, n);
	getch();

}