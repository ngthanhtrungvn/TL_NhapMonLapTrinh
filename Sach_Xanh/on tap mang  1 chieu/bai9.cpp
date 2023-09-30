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
		if(a[i]%2==0)
		b[m++]=a[i];
}

void main()
{
	int a[MAX],n;
	int b[MAX],m;
	nhap(a,n);
	xuat(a,n);
	mangb(a,n,m,b);
	printf("\nmang b:");
	xuat(b,m);
	getch();
}