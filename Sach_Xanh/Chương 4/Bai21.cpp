#include<stdio.h>
#include<conio.h>
int kiemTraGioPhutGiay(int gio, int phut, int giay)
{
	if ((gio >= 0 && gio <= 23) && (phut >= 0 && phut < 60) && (giay >= 0 && giay < 60))
		return 1;
	return 0;
}
void gioSau1Giay(int gio, int phut, int giay, int& h, int& m, int& s)
{
	if (kiemTraGioPhutGiay(gio, phut, giay) == 1)
	{
		if (giay == 59)
		{
			if (phut == 59)
			{
				if (gio == 23)
				{
					gio = 00; phut = 00; giay = 00;
				}
				else
					gio++;
			}

			else
				phut++;
		}
		else
			giay++;
	}
	h = gio;
	m = phut;
	s = giay;
}
void truoc1Giay(int gio, int phut, int giay, int& h, int& m, int& s)
{
	if (kiemTraGioPhutGiay(gio, phut, giay) == 1)
	{
		if (giay == 00)
		{
			if (phut == 00)
			{
				if (gio == 00)
				{
					gio = 23; phut = 59; giay = 59;
				}
				else
					gio--;
			}

			else
				phut--;
		}
		else
			giay--;
	}
	h = gio;
	m = phut;
	s = giay;
}
void main()
{
	int gio, phut, giay;
	char ch;
	int h, m, s;
	printf("Nhap gio phut giay vao:");
	scanf("%d%c%d%c%d", &gio, &ch, &phut, &ch, &
		giay);
	int kq = kiemTraGioPhutGiay(gio, phut, giay);
	if (kq == 1)
		printf("Hop le");
	else
		printf("khong hop le");
	truoc1Giay(gio, phut, giay, h, m, s);
	printf("\nGio truoc 1 giay %d:%2d:%2d", h, m, s);
	gioSau1Giay(gio, phut, giay, h, m, s);
	printf("\nGio sau 1 giay %d:%2d:%2d", h, m, s);
	getch();
}
