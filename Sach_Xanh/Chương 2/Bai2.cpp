#include <stdio.h>
#include <conio.h>
void main()
{
	int F;
	printf("Nhap do F: ");
	scanf("%d",&F);
	float C = (float)5/9*(F-32);
	printf("Do C la: %.2f",C);
	getch();
}