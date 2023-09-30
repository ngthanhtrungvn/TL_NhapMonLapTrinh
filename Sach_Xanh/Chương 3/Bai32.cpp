#include <stdio.h>
#include <conio.h>
void main()
{
	
	int n;
	int sum = 0;
	printf("Nhap vao so nguyen: ");
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		sum += i;
		i++;
	}
	printf("Tong la: %d", sum);
	getch();
}
