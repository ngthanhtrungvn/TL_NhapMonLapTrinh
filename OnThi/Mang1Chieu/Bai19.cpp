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

int demSNT(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kTraSNT(a[i]) == 1)
		{
			dem++;
		}
	}
	return dem;
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nCo %d so nguyen to trong mang", demSNT(a, n));
	getch();

}