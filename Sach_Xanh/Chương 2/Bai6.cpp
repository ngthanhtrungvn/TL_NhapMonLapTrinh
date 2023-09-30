#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float x;
	printf("nhap vao so thuc x: ");
	scanf("%f", &x);
	float F = (float)(3 * pow(x, 2) + 4 * x + 5) / (2 * x + 1);
	float G = (3 * pow(x, 4) + 2 * x + sqrtf(x + 1)) / (float)(5 * pow(x, 2) - 3);
	printf("Gia tri Fx la: %.2f\nGia tri Gx la: %.2f", F, G);
	getch();
}
