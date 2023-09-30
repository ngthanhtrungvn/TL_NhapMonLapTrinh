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

int timMax(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int timMin(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}


void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nMax: %d", timMax(a, n));
	printf("\nMin: %d", timMin(a, n));
	getch();
}