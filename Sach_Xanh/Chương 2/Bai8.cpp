#include <conio.h>
#include <stdio.h>
#define PI 3.14
void main()
{
	int r;
	printf("Nhap r: ");
	scanf("%d", &r);
	float CV = 2 * r * PI;
	float DT = r * r * PI;
	printf("Chu vi HT la: %.2f", CV);
	printf("\nDien tich HT la: %.2f", DT);
	getch();
}