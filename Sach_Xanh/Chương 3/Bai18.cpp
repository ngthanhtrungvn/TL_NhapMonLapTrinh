#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	float sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += (float)1 / (i * (i + 1) * (i + 2);
	}
	printf("%.2f", sum);
	getch();

}