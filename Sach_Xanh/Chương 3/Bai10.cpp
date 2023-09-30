#include <stdio.h>
#include <conio.h>
void main()
{
	int nam;
	printf("Nhap vao so nam: ");
	scanf("%d", &nam);
	if (nam % 400 == 0 || nam % 4 == 0 && nam / 100 == 0)
	{
		printf("%d la nam nhuan", nam);
	}
	else
	{
		printf("%d khong la nam nhuan", nam);
	}
	getch();

}