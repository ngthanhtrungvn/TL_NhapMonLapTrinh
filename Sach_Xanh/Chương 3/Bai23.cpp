#include <stdio.h>
#include <conio.h>
void main()
{
	int d, r;
	int n;
	printf("Nhap d: ");
	scanf("%d", &d);
	printf("Nhap r: ");
	scanf("%d", &r);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	getch();
}

