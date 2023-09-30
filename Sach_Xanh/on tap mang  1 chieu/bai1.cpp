#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhap1(int a[],int &n);
void nhap(int a[],int &n);
void main()
{
	int a[MAX],n;
	nhap1(a,n);
	getch();
}
void nhap(int a[],int &n)
{
	do
	{
		printf("Nhap vao so luong phan tu:");
		scanf("%d",&n);
	}while(n<=0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]%3!=0)
		{
			printf("Nhap lai!");
			i--;
		}
	}
}
void nhap1(int a[],int &n)
{
	do
	{
		printf("Nhap vao so luong phan tu:");
		scanf("%d",&n);
	}while(n<=0||n>MAX);
		for(int i=0;i<n;i++)
	{
		int x;
		do
	{
		
		printf("a[%d]=",i);
		scanf("%d",&x);
			}while(x%3!=0);
	a[i]=x;
		}
}