#include<conio.h>
#include<stdio.h>
#include<math.h>

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

int kTraSCP(int x) {
	for (int i = 0; i <= x/(float)2; i++)
	{
		if (i*i == x)
		{
			return 1;
		}
	}
	return 0;
}

void xuatSCPMin(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (kTraSCP(a[i]) && a[i] < min)
		{
			min = a[i];

		}
	}
	printf("%d ", min);
}



void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	xuatSCPMin(a, n);
	getch();
}