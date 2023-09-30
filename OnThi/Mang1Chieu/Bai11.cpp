#include<conio.h>
#include<stdio.h.>
#include<math.h.>

int kTraSNT(int x) {
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void xuatSNT(int& n) 
{
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		if (kTraSNT(i) == 1)
		{
			printf("%d ", i);
		}

	}
}

void nhapMangKhongChuaSNTLonHon200(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		if (kTraSNT(a[i]) == 0 || kTraSNT(a[i]) > 200)
		{
			printf("Nhap lai!\n");
			i--;
		}
	}

}

void nhapMangKhongSNTCoThuTuGiam(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		if (kTraSNT((a[i])) == 0)
		{
			for (int j = 0; j < i; j++)
				if (a[i] > a[j])
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
	printf("\n 1. Khong chua SNT lon hon 200");
	printf("\n 2. Cac SNT co thu tu giam");
	printf("\n Moi ban chon bai: ");
	scanf("%d", &chon);
	switch (chon)
	{
	case 1: {
		nhapMangKhongChuaSNTLonHon200(a, n);
		xuatMang(a, n);
	}break;
	case 2: {
		nhapMangKhongSNTCoThuTuGiam(a, n);
		xuatMang(a, n);
	}break;
	default:
		break;
	}
	getch();

}