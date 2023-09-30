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

void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}
void sapXepChanTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if ((a[i] % 2 != 0 && a[j] % 2 == 0) || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]))
				swap(a[i], a[j]);
}

void sapXepLeGiam(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if ((a[i] % 2 != 0 && a[j] % 2 == 0) || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j]))
				swap(a[i], a[j]);
}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	sapXepChanTang(a, n);
	printf("\n");
	xuatMang(a, n);
	sapXepLeGiam(a, n);
	printf("\n");
	xuatMang(a, n);
	getch();

}