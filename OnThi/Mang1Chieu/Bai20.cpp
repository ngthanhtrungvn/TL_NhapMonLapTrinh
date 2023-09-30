#include<conio.h>
#include<stdio.h.>
#include<math.h.>

void nhapMang(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}

}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

}


int demX(int a[], int n, int x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	int x;
	printf("\nNhap x: ");
	scanf("%d", &x);
	printf("So %d xuat hien %d lan trong mang", x, demX(a, n, x));
	getch();

}