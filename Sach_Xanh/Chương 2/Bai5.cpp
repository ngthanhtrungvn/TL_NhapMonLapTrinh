#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	float Fx=(float)(-b+sqrtf(b*b-4*a*c))/2*a;
	float Gx=(-b-sqrtf(b*b-4*a*c))/(float)2*a;
	printf("Gia tri Fx la: %.2f\nGia tri Gx la: %.2f", Fx, Gx);
	printf("khong xay ra");
	getch();

}
