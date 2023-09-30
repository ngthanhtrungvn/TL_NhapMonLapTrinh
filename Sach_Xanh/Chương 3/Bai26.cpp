#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (i % 5 == 0)
		{
			printf("%5d", i);
		}
	}
	getch();
}