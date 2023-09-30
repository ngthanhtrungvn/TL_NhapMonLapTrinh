#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	getch();

}