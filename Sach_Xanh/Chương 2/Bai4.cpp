#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	float Fx = 1 + x /(float) 1 - x;
	float Gx = 1 + 5*x - 7*pow(x,2) /(float) 2 + 3*pow(x,3);
	printf("Fx=%.2f", Fx);
	printf("\nGx=%.2f", Gx);
	getch();


}