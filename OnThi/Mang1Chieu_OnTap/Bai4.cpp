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

int tinhTBCTichChan(int a[], int n) {
	int sum = 1;
	int soLuongChan = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum *= a[i];
			soLuongChan++;
		}
	}
	return sum /(float)soLuongChan;
}

int tinhTBCTichLe(int a[], int n) {
	int sum = 1;
	int soLuongLe = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum *= a[i];
			soLuongLe++;
		}
	}
	return sum/(float)soLuongLe;
}



void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nTrung binh tich cac so chan: %d", tinhTBCTichChan(a, n));
	printf("\nTrung binh tich cac so le: %d", tinhTBCTichLe(a, n));
	getch();
}