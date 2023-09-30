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

int kTraChuaChuSo2(int n) {
	while (n > 0)
	{
		int so = n % 10;
		if (so == 2)
		{
			return 1;
		}
		n /= 10;
	}
	
	return 0;
}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nCac phan tu chua chu so 2 trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (kTraChuaChuSo2(a[i]))
		{
			printf("%d ", a[i]);
		}
	}
	getch();
}