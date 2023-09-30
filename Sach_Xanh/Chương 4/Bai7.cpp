#include <stdio.h>
#include <conio.h>
int demUoc(int n);
void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("co %d uoc ", demUoc(n));
	getch();
}
int demUoc(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	return dem;

}