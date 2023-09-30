#include<conio.h>
#include<stdio.h>
#include<math.h>

void nhapMang(int a[], int& nA) {
	printf("Nhap so luong phan tu: ");
	scanf("%d", &nA);
	for (int i = 0; i < nA; i++)
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


void taoMangB(int a[], int nA, int b[], int& nB) {
	nB = 0;
	for (int i = 0; i < nA; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[nB] = a[i];
			nB++;
		}
	}

}

void main() {
	int a[100], nA;
	int b[100], nB;
	nhapMang(a, nA);
	xuatMang(a, nA);
	printf("\n");
	taoMangB(a, nA, b, nB);
	xuatMang(b, nB);
	getch();
}