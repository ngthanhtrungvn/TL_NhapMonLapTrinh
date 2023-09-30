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

int tinhTongVTChan(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sum += a[i];
		}
	}
	return sum;
}

int tinhTongVTLe(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nTong cac vi tri chan: %d", tinhTongVTChan(a, n));
	printf("\nTong cac vi tri le: %d", tinhTongVTLe(a, n));
	getch();

}