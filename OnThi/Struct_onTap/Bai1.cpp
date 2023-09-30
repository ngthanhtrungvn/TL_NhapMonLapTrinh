
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct SACH
{
	char ma[11];
	char ten[31];
	float giaBan;
	int soLuong;
};

void nhapTTSach(SACH sach[], int &n) {

	printf("Nhap so luong sach: ");
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap sach thu %d\n", i);

		printf("\nNhap ma sach: ");
		gets_s(sach[i].ma);
		printf("\nNhap ten sach: ");
		gets_s(sach[i].ten);
		printf("\nNhap gia ban: ");
		scanf("%f", &sach[i].giaBan);
		printf("\nNhap so luong: ");
		scanf("%d", &sach[i].soLuong);
		getchar();
		
	}
}

void xuatTTSach(SACH sach[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("\nThong tin sach thu %d\n", i);
		printf("%s\t%s\t%f\t%d", sach[i].ma, sach[i].ten, sach[i].giaBan, sach[i].soLuong);
	}

}

void xuatSachSoLuong10(SACH sach[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (sach[i].soLuong > 10)
		{
			printf("%s\t%s\t%f\t%d", sach[i].ma, sach[i].ten, sach[i].giaBan, sach[i].soLuong);
		}
	}

}

int tinhTongSLSach(SACH sach[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += sach[i].soLuong;
	}
	return tong;
}




void main() {
	SACH a[100];
	int n;
	int chon;
	printf("\n-------------------MENU---------------------");
	printf("\n 1. Nhap xuat TT sach");
	printf("\n 2. Xuat sach so luong > 10");
	printf("\n 3. Tinh tong so luong sach");
	printf("\n Moi ban chon bai: ");
	scanf("%d", &chon);
	switch (chon)
	{
	case 1: {
		nhapTTSach(a, n);
		xuatTTSach(a, n);
	}break;
	case 2: {
		nhapTTSach(a, n);
		xuatSachSoLuong10(a, n);
	}break;
	case 3: {
		nhapTTSach(a, n);
		printf("Tong so luong sach: %d", tinhTongSLSach(a, n));
	}break;
	
	default:
		break;
	}
	getch();
}