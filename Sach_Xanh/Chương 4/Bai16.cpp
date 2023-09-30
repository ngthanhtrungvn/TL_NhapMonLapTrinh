#include <stdio.h>
#include <conio.h>
int tongBangTich(int n);
void main()
{
	int i = 0;
	while (i < 1000)
	{
		int kq = tongBangTich(i);
		if (kq == 1)
			printf("%d ", i);
		i++;
	}
	getch();
}
int tongBangTich(int n)
{
	int tg = 0, t = 1, a, N = n, M = n;
	while (N > 0)
	{
		a = N % 10;
		tg = tg + a;
		N = N / 10;
	}
	while (M > 0)
	{
		a = M % 10;
		t = t * a;
		M = M / 10;
	}
	if (tg == t || n == 0)
		return 1;
	return 0;
}
