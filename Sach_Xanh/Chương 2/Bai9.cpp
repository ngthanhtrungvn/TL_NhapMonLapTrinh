#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	float CV = a * 4;
	float DT = a * a;
	float DC = a * sqrtf(2);
	printf("Chu vi HV la: %.2f", CV);
	printf("\nDien tich HV la: %.2f", DT);
	printf("\nDuong cheo HV la: %.2f", DC);
	getch();
}