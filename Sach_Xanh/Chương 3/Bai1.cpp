#include <stdio.h>
#include <conio.h>
void main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	if (x > 0) {
		printf("%d la so duong", x);
	}
	if (x == 0) {
		printf("%d la so khong am khong duong", x);
	}
	if (x < 0) {
		printf("%d la so am", x);
	}
	getch();
}