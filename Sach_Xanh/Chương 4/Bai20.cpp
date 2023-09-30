#include<stdio.h>
#include<conio.h>
int cachTraTien(int n, int& muoi1, int& nam1, int& muoi2, int& nam2, int& nam3)
{
	int x = n;
	int hai = x / 20000;
	muoi1 = (x % 20000) / 10000;
	nam1 = (x - hai * 20000 - muoi1 * 10000) / 5000;
	muoi2 = x / 10000;
	nam2 = (x - muoi2 * 10000) / 5000;
	nam3 = x / 5000;
	return hai;
}
void main()
{
	int n, nam1, muoi1, muoi2, nam2, nam3;
	do
	{
		printf("Nhap so tien vao:");
		scanf("%d", &n);
		if (n <= 100000)
			printf("Vui long nhap lai!\n");
	} while (n <= 100000);
	int kq = cachTraTien(n, muoi1, nam1, muoi2, nam2, nam3);
	printf("Tra %d loai 20000, %d loai 10000,%d loai 5000", kq, muoi1, nam1);
	printf("\nOr tra %d loai 10000, %d loai 5000", muoi2, nam2);
	printf("\nOr tra %d loai 5000", nam3);
	getch();
}