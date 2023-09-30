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

void timMax(int a[], int& n, int x) {
	int max = a[0];
	int viTriMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			viTriMax = i;
		}
	}
	themX(a, n, viTriMax, x);

}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	int x;
	printf("\nNhap gia tri ban muon them: ");
	scanf("%d", &x);
	timMax(a, n, x);
	printf("\n");
	xuatMang(a, n);
	getch();
}