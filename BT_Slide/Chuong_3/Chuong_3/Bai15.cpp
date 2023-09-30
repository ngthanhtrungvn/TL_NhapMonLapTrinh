#include<conio.h>
#include<stdio.h>

int timTong() {
	int tong = 0;
	for (int i = 0; i < 100; i++)
	{
		tong += i;
	}
	return tong;
}

void main() {
	printf("Tong: %d", timTong());
	getch();
}