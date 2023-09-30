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

int timChanNhoNhat(int a[], int n) {
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && a[i] %2 == 0)
		{
			min = a[i];
		}
	}
	return min;

}

int timLeNhoNhat(int a[], int n) {
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && a[i] % 2 != 0)
		{
			min = a[i];
		}
	}
	return min;

}

int timChanLonNhat(int a[], int n) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max && a[i] % 2 == 0)
		{
			max = a[i];
		}
	}
	return max;

}

int timLeLonNhat(int a[], int n) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max && a[i] % 2 != 0)
		{
			max = a[i];
		}
	}
	return max;

}



void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nGia tri chan nho nhat la: %d", timChanNhoNhat(a, n));
	printf("\nGia tri le nho nhat la: %d", timLeNhoNhat(a, n));
	printf("\nGia tri chan lon nhat la: %d", timChanLonNhat(a, n));
	printf("\nGia tri le lon nhat la: %d", timLeLonNhat(a, n));
	getch();
}