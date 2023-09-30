#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
		do
	{
		printf("Nhap so luong phan tu trong mang vao:");
		scanf("%d",&n);
	}while(n<0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	printf("%5d",a[i]);
}
void xoa(int a[],int &n,int k)
{
	if(k<0||k>n) return;
	for(int i=k;i<n-1;i++)
		a[i]=a[i+1];
	n--;
}
void mangb(int a[],int n,int b[],int &m)
{
	m=0;
	for(int i=0;i<n;i++)
	b[m++]=a[i];
}
void xoaTrung(int b[],int &m)
{
	for (int i=0;i<m;i++)
		for (int j=0; j<i;j++)
			if (b[i]==b[j])
			{
				xoa(b,m,i);
				i--;
			}
}
void main()
{
	int n,m,b[MAX];
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	mangb(mang,n,b,m);
	xoaTrung(b,m);
	printf("\nMang chua cac so xuat hien 1 lan la:");
	xuatMang(b,m);
	getch();
}