#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 2; i <= n; i += 2)
	{
		sum += i;
	}
	printf("%d", sum);
	getch();
}