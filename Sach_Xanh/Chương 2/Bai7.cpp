#include <stdio.h>
#include <conio.h>
void main()
{
	int d, r;
	printf("Nhap chieu dai: ");
	scanf("%d", &d);
	printf("Nhap chieu rong: ");
	scanf("%d", &r);
	float CV = (d + r) * 2;
	float DT = d * r;
	printf("Chu vi HCN la: %.2f", CV);
	printf("\nDien tich HCN la: %.2f", DT);
	getch();

}