#include<conio.h>
#include<stdio.h.>
#include<limits.h>


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

int timSoAmLonNhat(int a[], int n)
{
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max && a[i] < 0)
		{
			max = a[i];
		}
	}
	return max;

}

int timSoDuongNhoNhat(int a[], int n)
{
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && a[i] > 0)
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
	printf("So am lon nhat la: %d", timSoAmLonNhat(a, n));
	printf("\nSo duong nho nhat la: %d", timSoDuongNhoNhat(a, n));
	getch();

}