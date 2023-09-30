#include<conio.h>
#include<stdio.h>
#include<math.h>

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

int kTraSNT(int x) {
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt((float)x); i++)
	{
		if (x%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int timMin(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && kTraSNT(a[i]))
		{
			min = a[i];
		}
	}
	return min;
}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nSo nguyen to nho nhat la: %d", timMin(a, n));
	getch();
}