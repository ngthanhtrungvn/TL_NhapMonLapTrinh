#include<conio.h>
#include<stdio.h.>

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

int tinhTrungBinh(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum/(float)n;
}
void main() {
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nTrung binhg la: %d", tinhTrungBinh(a, n));
	getch();

}