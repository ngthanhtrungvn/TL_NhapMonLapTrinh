#include<conio.h>
#include<stdio.h.>

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


void xuatViTriChan(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", a[i]);
		}
	}
}


void xuatViTriLe(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", a[i]);
		}
	}
}

void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nXuat cac phan tu o vi tri chan: ");
	xuatViTriChan(a, n);
	printf("\nXuat cac phan tu o vi tri le: ");
	xuatViTriLe(a, n);
	getch();

}