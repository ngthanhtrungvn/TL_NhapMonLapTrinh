﻿#include<conio.h>
#include<stdio.h>
#define MAX 100


void nhap(int a[], int& n)
{

	printf("\nNhap vao so luong phan tu:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
		
}
void tron(int a[], int b[], int c[], int m, int n)
{
	int k = 0;
	if (m == n)
		for (int i = 0; i < m; i++)
			if (a[i] > b[i])
				c[k++] = b[i];
			else
				c[k++] = a[i];
	else
		if (n > m)
		{
			for (int i = 0; i < m; i++)
				if (a[i] > b[i])
					c[k++] = b[i];
				else
					c[k++] = a[i];
			for (int i = m; i < n; i++)
				c[k++] = a[i];
		}
		else
		{
			for (int i = 0; i < n; i++)
				if (a[i] > b[i])
					c[k++] = b[i];
				else
					c[k++] = a[i];
			for (int i = n; i < m; i++)
				c[k++] = b[i];
		}
	xuat(c, k);
}
void main()
{
	int a[MAX], n;
	int b[MAX], m;
	int c[MAX];
	nhap(a, n);
	xuat(a, n);
	nhap(b, m);
	xuat(b, m);
	printf("\nMang moi:");
	tron(a, b, c, m, n);
	getch();
}