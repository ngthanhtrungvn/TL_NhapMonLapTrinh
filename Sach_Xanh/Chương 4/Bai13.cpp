#include <stdio.h>
#include <conio.h>
int timSoNguyenToCungNhau(int m, int n);
void main()
{
	int m, n;
	printf("Nhap m n: ");
	scanf("%d%d", &m, &n);
	int kq = timSoNguyenToCungNhau(m, n);
	if (kq == 1)
		printf("Hai so nguyen to cung nhau");
	else
		printf("Khong phai so nguyen to cung nhau");
	getch();
}
int timSoNguyenToCungNhau(int m, int n)
{
	while (m != n)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	if (m == 1)
	{
		return 1;
	}
	return 0;
}