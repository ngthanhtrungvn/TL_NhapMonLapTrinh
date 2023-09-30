#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	if (n > 5)
	{
		printf("Gia tri sau khi n tang len 2 don vi la: %d", n + 2);
	}
	else
	{
		printf("Gia tri n la: 0");
	}
	getch();
}