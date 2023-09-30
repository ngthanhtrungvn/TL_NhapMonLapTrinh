#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("===============BANG CUU CHUONG %d==================\n", n);
	for (int j = 1; j <= 10; j++)
	{
		printf("%d * %d = %d\n", n, j, n * j);
	}

	getch();
}