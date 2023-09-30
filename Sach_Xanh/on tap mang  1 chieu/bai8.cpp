#include<conio.h>
#include<stdio.h>
#define MAX 100


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
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
void mangb(int a[],int n,int &m,int b[])
{
	m=0;
	for(int i=0;i<n;i++)
		b[m++]=a[i];
}
void xoa(int a[],int &n,int k)
{
	if(k<0||k>n-1)
		return ;
	for(int i=k;i<n;i++)
		a[i]=a[i+1];
	n--;
}
void xoaTrung(int a[],int &n)
{
	int i,j,k;
	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (a[i] == a[j])
			{
				xoa(a,n,i);
				i--;
			}
}
void main()
{
	int a[MAX],n;
	int b[MAX],m;
	nhap(a,n);
	xuat(a,n);
	mangb(a,n,m,b);
	xoaTrung(b,m);
	printf("\nmang b:");
	xuat(b,m);
	getch();
}