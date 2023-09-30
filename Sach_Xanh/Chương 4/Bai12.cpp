#include <stdio.h>
#include <conio.h>
void tong(int a, int b, int c, int d, int e, int f, char ch);
void tich(int a, int b, int c, int d, int e, int f, char ch);
void main()
{
	int a, b, c, d, e, f;
	char ch;
	do {
		printf("Nhap vao a/b:"); 
		scanf("%d%c%d", &a, &ch, &b);
		printf("Nhap vao c/d:"); 
		scanf("%d%c%d", &c, &ch, &d);
		printf("Nhap vao e/f:"); 
		scanf("%d%c%d", &e, &ch, &f);
	} while (b == 0 || d == 0 || f == 0);
	tong(a, b, c, d, e, f, ch);
	tich(a, b, c, d, e, f, ch);
	getch();

}
void tong(int a, int b, int c, int d, int e, int f, char ch)
{
	int x = f * (a * d + c * b) + e * b * d, q = x;
	int y = b * d * f, w = y;
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	q = q / x;
	w = w / x;
	printf("Tong=%d%c%d\n", q, ch, w);
}
void tich(int a, int b, int c, int d, int e, int f, char ch)
{
	int x = a * c * e, q = x;
	int y = b * d * f, w = y;
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	q = q / x;
	w = w / x;
	printf("Tich=%d%c%d", q, ch, w);
}
