#include<conio.h>
#include<stdio.h.>

void nhapMangKhongTrung(int a[], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				printf("Nhap lai!\n");
				i--;
			}
		}
	}


}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

}
void main() {
	int a[100], n;
	nhapMangKhongTrung(a, n);
	xuatMang(a, n);
	getch();

}