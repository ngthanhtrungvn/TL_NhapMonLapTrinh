#include <stdio.h>
#include <conio.h>
void main()
{
	for (int i = 1; i <= 9; i++)
	{
		printf("=============BANG CUU CHUONG %d================\n", i);
		for (int j = 1; j <= 10; j++)

			printf("%d * %d = %d\n", i, j, i * j);
	}
	getch();
}