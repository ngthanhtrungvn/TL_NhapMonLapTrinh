//chạy chưa dc
#include <stdio.h>
#include <conio.h>
void timSo(long N);
void main()
{
	long N;
	printf("Nhap vao so N: ");
	scanf("%d", &N);
	timSo(N);
	getch();

}
void timSo(long N)
{
	int dau, dem = 0, s = 0, max = 0, X = N, x = N;
	bool dm = true;
	while (N > 0)
	{
		dau = N % 10;
		dem++;
		s += dau;
		N = N / 10;
		if (max < dau)
			max = dau;
		while (X > 0)
		{
			int a = X % 10;
			while (x > 0)
			{
				x = x / 10;
				int b = x % 10;
				if (a == b)

					dm = false;
			}break;

		}
	}
	printf("So dau tien la %d\n", dau);
	printf("Tong cac chu so la %d\n", s);
	printf("So lon nhat trong cac chu so la %d\n", max);
	printf("Co tat ca %d chu so\n", dem);
	if (dm)
		printf("So khac nhau doi mot");
	else
		printf("So khong khac nhau doi mot");
}