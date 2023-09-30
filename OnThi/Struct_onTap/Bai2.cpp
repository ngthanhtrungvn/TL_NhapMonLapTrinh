#include<stdio.h>
#include<conio.h>
#include<string.h>

struct DIENTHOAI
{
	char ma[11];
	char ten[21];
	char loai[11];
	float giaBan;
	int soLuong;
};

void nhapTTDienThoai(DIENTHOAI dt[], int& n) {
	printf("Nhap so luong dien thoai: ");
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		printf("Nhap ma dien thoai: ");
		gets_s(dt[i].ma);
		printf("Nhap ten dien thoai: ");
		gets_s(dt[i].ten);
		printf("Nhap loai dien thoai: ");
		gets_s(dt[i].loai);
		printf("Nhap gia ban: ");
		scanf("%f", &dt[i].giaBan);
		printf("Nhap so luong: ");
		scanf("%d", &dt[i].soLuong);
		getchar();
	}

}

void xuatTTDienThoai(DIENTHOAI dt[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("\nThong tin dien thoai thu %d\n", i);
		printf("%s\t%s\t%s\t%f\t%d", dt[i].ma, dt[i].ten, dt[i].loai, dt[i].giaBan, dt[i].soLuong);
	}
}

void timDienThoaiTheoTen(DIENTHOAI dt[], int n) {
	for (int i = 0; i < n; i++) {
		if (strstr(dt[i].ten, "GalaxyY") != NULL) {
			printf("%-12s %-20s %-10s %-10.2f %-10d\n", dt[i].ma, dt[i].ten, dt[i].loai, dt[i].giaBan, dt[i].soLuong);
		}
	}
}


int tinhTongTien(DIENTHOAI dt[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += dt[i].giaBan;
	}
	return tong;
}

void xuatTTDienThoaiLoaiNOKIA(DIENTHOAI dt[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (strstr(dt[i].loai, "NOKIA") != NULL)
		{
			printf("%s\t%s\t%s\t%f\t%d", dt[i].ma, dt[i].ten, dt[i].loai, dt[i].giaBan, dt[i].soLuong);
		}
	}
}


void main() {
	DIENTHOAI dt[100];
	int n;
	int chon;
	printf("\n--------------MENU------------------");
	printf("\n 1. Nhap xuat thong tin dien thoai");
	printf("\n 2. Tinh tong tien dien thoai");
	printf("\n 3. Xuat dien thoai loai NOKIA");
	printf("\n 3. Tim dien thoai ten GALAXY");
	printf("\n Moi ban chon bai: ");
	scanf("%d", &chon);
	switch (chon)
	{
	case 1: {
		nhapTTDienThoai(dt, n);
		xuatTTDienThoai(dt, n);
	}break;
	case 2: {
		nhapTTDienThoai(dt, n);
		printf("Tong tien dien thoai la: %f", tinhTongTien(dt, n));
	}break;
	case 3: {
		nhapTTDienThoai(dt, n);
		xuatTTDienThoaiLoaiNOKIA(dt, n);
	}break;
	case 4: {
		nhapTTDienThoai(dt, n);
		timDienThoaiTheoTen(dt, n);
	}break;
	default:
		break;
	}
	getch();
}