#include<conio.h>
#include<stdio.h.>
#include<math.h.>

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

int kTraSNT(int x) {
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(float(x)); i++)
	{
		if (x%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void xoa(int a[], int& n, int k) {
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void xoaSNT(int a[], int& n) {
	for (int i = 0; i < n; i++)
	{
		if (kTraSNT(a[i]) == 1)
		{
			xoa(a, n, i);
			i--;
		}
	}
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	xoaSNT(a,n);
	printf("\n");
	xuatMang(a,n);
	getch();

}