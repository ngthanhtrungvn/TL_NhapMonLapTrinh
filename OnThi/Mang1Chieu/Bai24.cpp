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

int kTraTrung(int b[], int m, int x) {
	for (int i = 0; i < m; i++)
	{
		if (b[i] == x)
		{
			return 1;
		}
	}
	return 0;
}

void taoMangKhongTrung(int a[], int n, int b[], int& m) {
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (kTraTrung(b,m,a[i]) == 0)
		{
			b[m] = a[i];
			m++;
		}
	}

}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	int b[100], m;
	taoMangKhongTrung(a, n, b, m);
	printf("\n");
	xuatMang(b, m);
	getch();

}