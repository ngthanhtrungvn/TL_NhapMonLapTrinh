#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d", i);
		}
	}
	getch();
}