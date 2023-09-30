#include<stdio.h>
#include<conio.h>
#include<string.h>

struct DIENTHOAI
{
	char ma[11];
	char ten[21];
	char NSX[21];
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
		printf("Nhap nha san xuat: ");
		gets_s(dt[i].NSX);
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
		printf("%s\t%s\t%s\t%f\t%d", dt[i].ma, dt[i].ten, dt[i].NSX, dt[i].giaBan, dt[i].soLuong);
	}
}

void xuatTTDienThoaiSoLuong10(DIENTHOAI dt[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (dt[i].soLuong < 10)
		{
			printf("%s\t%s\t%s\t%f\t%d", dt[i].ma, dt[i].ten, dt[i].NSX, dt[i].giaBan, dt[i].soLuong);
		}
	}
}

void xuatTTDienThoaiMaIP(DIENTHOAI dt[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (strncmp(dt[i].ma, "IP", 2) == 0)
		{
			printf("%s\t%s\t%s\t%f\t%d", dt[i].ma, dt[i].ten, dt[i].NSX, dt[i].giaBan, dt[i].soLuong);
		}
	}
}

void xuatTTDienThoaiHangSAMSUNG(DIENTHOAI dt[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (strstr(dt[i].NSX, "SAMSUNG") != NULL)
		{
			printf("%s\t%s\t%s\t%f\t%d", dt[i].ma, dt[i].ten, dt[i].NSX, dt[i].giaBan, dt[i].soLuong);
		}
	}
}


void main() {
	DIENTHOAI dt[100];
	int n;
	int chon;
	printf("\n--------------MENU------------------");
	printf("\n 1. Nhap xuat thong tin dien thoai");
	printf("\n 2. xuat dien thoai co so luong < 10");
	printf("\n 3. xuat dien thoai co ma bat dau bang IP");
	printf("\n 4. xuat dien thoai hang SAMSUNG");
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
		xuatTTDienThoai(dt, n);
	}break;
	case 3: {
		nhapTTDienThoai(dt, n);
		xuatTTDienThoaiMaIP(dt, n);
	}break;
	case 4: {
		nhapTTDienThoai(dt, n);
		xuatTTDienThoaiHangSAMSUNG(dt, n);
	}break;
	default:
		break;
	}
	getch();
}