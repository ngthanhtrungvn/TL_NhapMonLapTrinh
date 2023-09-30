#include<conio.h>
#include<stdio.h>

void xuatGioPhutGiay(int t)
{
	int gio, phut, giay;
	gio = t / 3600;
	phut = (t % 3600) / 60;
	giay = (t % 3600) % 60;
	printf("%dh:%dm:%ds", gio, phut, giay);
}
void main() {
	int n;
	printf("Nhap T: ");
	scanf("%d", &n);
	xuatGioPhutGiay(n);
	getch();
}