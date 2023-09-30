#include<conio.h>
#include<stdio.h.>

void nhapMangKhongAm(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		if (a[i] < 0)
		{
			printf("Nhap lai!\n");
			i--;
		}
	}

}

int dem3PhanTu0(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			dem++;
		}
	}
	return dem;
}

void nhapMang3PhanTubang0(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		if (dem3PhanTu0(a,n) > 3)
		{
			printf("Nhap lai!\n");
			--i;
		}
	}

}

void nhapMangKhoangCachKhongLonHon4(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++)
		{
			if (a[i] - a[j] > 4)
			{
				printf("Nhap lai!\n");
				--i;
			}
		}
	}

}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

}
void main() {
	int a[100], n;
	int chon;
	printf("--------------MENU-----------------");
	printf("\n 1. Khong chua so am");
	printf("\n 2. Co nhieu nhat 3 phan tu chua gia tri 0");
	printf("\n 3. Khoang cach giua 2 phan tu bat ky khong qua 4");
	printf("\n Moi ban chon bai: ");
	scanf("%d", &chon);
	switch (chon)
	{
	case 1: {
		nhapMangKhongAm(a, n);
		xuatMang(a,n);
		
	}break;
	case 2: {
		nhapMang3PhanTubang0(a, n);
		xuatMang(a, n);

	}break;
	case 3: {
		nhapMangKhoangCachKhongLonHon4(a, n);
		xuatMang(a, n);

	}break;
	default:
		break;
	}

	
	getch();

}