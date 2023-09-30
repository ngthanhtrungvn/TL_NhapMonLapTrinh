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

int kTraMangToanChan(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	if (kTraMangToanChan(a,n) == 1)
	{
		printf("Mang toan chan");
	}
	else
	{
		printf("Mang khong toan chan");
	}
	getch();
}