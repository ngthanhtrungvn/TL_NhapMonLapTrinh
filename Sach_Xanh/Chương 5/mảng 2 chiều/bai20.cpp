#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100
void nhapMT(int a[][MAX],int &m,int &n)
{
	do
	{
		printf("Nhap so dong vao.m=");
		scanf("%d",&m);
	} while (m<0||m>MAX);
	do
	{
		printf("Nhap so cot vao.n=");
		scanf("%d",&n);
	} while (n<0||n>MAX);
	srand(time(NULL));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("Nhap a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}		
}
void xuatMT(int a[][MAX],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%5d",a[i][j]);
	printf("\n");
	}
}
int tinhTong(int a[],int n)
{
	int s=0;
	for(int j=0;j<n;j++)
		s+=a[j];
	return s;
}
int tongNN(int a[][MAX],int m,int n)
{
	int min=tinhTong(a[0],n);
	for(int i=0;i<m;i++)
		if(tinhTong(a[i],n)<min)
			min=tinhTong(a[i],n);
		return min;
}
void xuat(int a[][MAX],int m,int n)
{
	for(int i=0;i<m;i++)
		if(tinhTong(a[i],n)==tongNN(a,m,n))
		printf("Dong co tong nho nhat la:%d\n",i);
}
void main()
{
	int m,n;
	int a[MAX][MAX];
	nhapMT(a,m,n);
	printf("\nCac phan tu trong mang la:\n");
	xuatMT(a,m,n);
	xuat(a,m,n);
	getch();
}