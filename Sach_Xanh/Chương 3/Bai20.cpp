#include <stdio.h>
#include <conio.h>
void main()
{
	int i, n;
	int sum = 0;
	int p = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p += i;
		sum += p;
	}
	printf("%d", sum);
	getch();
}