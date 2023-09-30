#include<conio.h>
#include<stdio.h>

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

int tinhTBCSoDuong(int a[], int n) {
	int sum = 0;
	int soLuongDuong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sum += a[i];
			soLuongDuong++;
		}
	}
	return sum/(float)soLuongDuong;
}

int tinhTBCSoAm(int a[], int n) {
	int sum = 0;
	int soLuongAm = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			sum += a[i];
			soLuongAm++;
		}
	}
	return sum / (float)soLuongAm;
}


void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nTrung binh cong so luong duong: %d", tinhTBCSoDuong(a, n));
	printf("\nTrung binh cong so luong am: %d", tinhTBCSoAm(a,n));
	getch();
}