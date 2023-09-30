#include <stdio.h>
#include <conio.h>
void main()
{
	float donGia;
	int soLuong;
	printf("Nhap vao don gia 1 mat hang: ");
	scanf("%f", &donGia);
	printf("Nhap vao so luong ban cua mat hang: ");
	scanf("%d", &soLuong);
	float tongTien = soLuong * donGia;
	float giamGia = 0;
	if (tongTien > 100)
	{
		giamGia = 0.03 * tongTien;
	}
	float tongTienPhaiTra = tongTien - giamGia;
	printf("\nTong tien phai tra la: %.2f", tongTienPhaiTra);
	getch();

}
