#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (a > b) {
		printf("%d > %d", a, b);
	}
	if (a == b) {
		printf("%d = %d", a, b);
	}
	if (a < b) {
		printf("%d < %d", a, b);
	}
	getch();
}