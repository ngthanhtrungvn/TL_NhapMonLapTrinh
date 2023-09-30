#include<conio.h>
#include<stdio.h>
int kiemTraNamNhuan(int nam)
{
	if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
		return 1;
	return 0;
}

int timSoNgayTrongThang(int thang, int nam)
{
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
		return 31;
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		return 30;
	if (thang == 2)
		return 28 + kiemTraNamNhuan(nam);
}
int kiemTraNgayHopLe(int ngay, int thang, int nam)
{
	if (thang < 1 || thang>12)
		return 0;
	int songay = timSoNgayTrongThang(thang, nam);
	if (ngay<1 || ngay>songay)
		return 0;
	return 1;
}
void ngayTruocDo(int ngay, int thang, int nam)
{
	if (ngay == 1)
	{
		ngay = timSoNgayTrongThang(thang, nam);
		if (thang == 1)
		{
			thang = 12;
			nam--;
		}
		else
			thang--;
	}
	else
		ngay--;
	printf("\nNgay truoc do la %d/%d/%d", ngay, thang, nam);
}
void ngayKeTiep(int ngay, int thang, int nam)
{
	if (ngay == timSoNgayTrongThang(thang, nam))
	{
		ngay = 1;
		if (thang == 12)
		{
			thang = 1; nam++;
		}
		else
			thang++;
	}
	else
		ngay++;
	printf("\nNgay ke tiep la %d/%d/%d", ngay, thang, nam);
}
void main()
{
	int ngay, thang, nam;
	char ch;
	printf("Nhap ngay thang nam vao:");
	scanf("%d%c%d%c%d", &ngay, &ch, &thang, &ch, &nam);
	int kq = kiemTraNgayHopLe(ngay, thang, nam);
	if (kq == 1)
	{
		printf("Ngay hop le");
		ngayTruocDo(ngay, thang, nam);
		ngayKeTiep(ngay, thang, nam);
	}
	else
		printf("Ngay khong hop le");

	getch();

}
