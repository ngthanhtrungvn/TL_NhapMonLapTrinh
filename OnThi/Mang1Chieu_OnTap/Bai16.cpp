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

void themX(int a[], int& n, int k, int x) {
	for (int i = n; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
	n++;
}

void timMin(int a[], int& n, int x) {
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
	themX(a, n, viTriMin, x);
}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	int x;
	printf("\nNhap gia tri ban muon them: ");
	scanf("%d", &x);
	timMin(a, n, x);
	printf("\n");
	xuatMang(a, n);
	getch();
}