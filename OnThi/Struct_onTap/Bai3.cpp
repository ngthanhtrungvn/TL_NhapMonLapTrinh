#include<stdio.h>
#include<conio.h>
#include<string.h>

struct SINHVIEN
{
	char ma[11];
	char hoten[21];
	int namSinh;
	float diemTB;
};

void nhapThongTinSinhVien(SINHVIEN sv[], int &n) {
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{

		printf("Nhap ma sinh vien: ");
		gets_s(sv[i].ma);
		printf("Nhap ten sinh vien: ");
		gets_s(sv[i].hoten);
		printf("Nhap nam sinh: ");
		scanf("%d", &sv[i].namSinh);
		printf("Nhap diem trung binh: ");
		scanf("%f", &sv[i].diemTB);
		getchar();
	}
}

void xuatThongTinSinhVien(SINHVIEN sv[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Sinh vien thu %d", i);
		printf("%s\t%s\t%d\t%.2f", sv[i].ma, sv[i].hoten, sv[i].namSinh, sv[i].diemTB);
	}
}


int demSVLenLop(SINHVIEN sv[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (sv[i].diemTB >= 5)
		{
			dem++;
		}
	}
	return dem;
}

void xuatSV20Tuoi(SINHVIEN sv[], int n) {
	for (int i = 0; i < n; i++)
	{
		int tuoi = 2023 - sv[i].namSinh;
		if (tuoi == 20)
		{
			printf("%s\t%s\t%d\t%.2f", sv[i].ma, sv[i].hoten, sv[i].namSinh, sv[i].diemTB);
		}
	}

}


int demSinhVienHeDH(SINHVIEN sv[], int n) {

	int dem = 0;

	for (int i = 0; i < n; i++) {
		// Kiểm tra xem mã sinh viên có chứa "DH" ở vị trí 2 và 3 không
		if (strlen(sv[i].ma) >= 3 && sv[i].ma[2] == 'D' && sv[i].ma[3] == 'H') {
			dem++;
		}
	}

	return dem;
}


int demTenLan(SINHVIEN sv[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(sv[i].hoten, "Lan") == 0)
		{
			dem++;
		}
	}
	return dem;
}


int demSinhVienTheoHo(SINHVIEN sv[], int n) {
	int dem = 0;

	for (int i = 0; i < n; i++) {
		// Tách tên đầu tiên từ chuỗi họ tên
		char* hoSinhVien = strtok(sv[i].hoten, " ");

		// Kiểm tra xem họ của sinh viên có khớp với họ cần tìm không
		if (hoSinhVien != NULL && strcmp(hoSinhVien, "Phan") == 0) {
			dem++;
		}
	}

	return dem;
}

void main() {
	SINHVIEN sv[100];
	int n;
	int chon;
	printf("\n--------------MENU------------------");
	printf("\n 1. Nhap xuat thong tin sinh vien");
	printf("\n 2. Viet ham cho biet co bao nhieu sinh vien du dieu kien len lop, biet rang sinh vien du dieu kien len lop khi diem trung binh lon hon hoac bang 5.");
	printf("\n 3. Xuat cac sinh viên du 20 tuoi");
	printf("\n 4. dem so sinh vien hoc he dai hoc, biet rang sinh vien he DH có ma sinh vien chua 2 ky tu DH o vi tri 2, 3 trong chuoi.");
	printf("\n 5. Cho biet trong mang co bao nhieu sinh vien co ten Lan");
	printf("\n 6. Cho biet trong mang co bao nhieu sinh vien co ho Phan");
	printf("\n Moi ban chon bai: ");
	scanf("%d", &chon);
	switch (chon)
	{
	case 1: {
		nhapThongTinSinhVien(sv, n);
		xuatThongTinSinhVien(sv, n);
	}break;
	case 2: {
		nhapThongTinSinhVien(sv, n);
		printf("Sinh vien du dieu kien len lop: %d", demSVLenLop(sv, n));
	}break;
	case 3: {
		nhapThongTinSinhVien(sv, n);
		xuatSV20Tuoi(sv, n);
	}break;
	case 4: {
		nhapThongTinSinhVien(sv, n);
		printf("Sinh vien hoc dai hoc: %d", demSinhVienHeDH(sv, n));
	}break;
	case 5: {
		nhapThongTinSinhVien(sv, n);
		printf("Dem sinh vien theo ten Lan: %d", demTenLan(sv, n));
	}break;
	case 6: {
		nhapThongTinSinhVien(sv, n);
		printf("Dem sinh vien theo ho Phan: %d", demSinhVienTheoHo(sv, n));
	}break;
	default:
		break;
	}
	getch();

}