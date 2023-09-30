#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	float Fx=5*pow(x,2)+6*x+1;
	float Gx=2*pow(x,4)-5*pow(x,2)+4*x+1;
	printf("Fx=%.2f",Fx);
	printf("\nGx=%.2f",Gx);
	getch();


}