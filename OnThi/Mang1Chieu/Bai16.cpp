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

void chenX(int a[], int& n, int k, int x) {
	for (int i = n; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
	n++;
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	int k, x;
	printf("\nNhap vi tri can chen: ");
	scanf("%d", &k);
	printf("\nNhap gia tri muon chen: ");
	scanf("%d", &x);
	chenX(a, n, k, x);
	xuatMang(a, n);
	getch();

}