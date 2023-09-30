#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
	printf("Nhap so luong phan tu trong mang vao:");
	scanf("%d",&n);
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
void mangb(int a[],int n,int b[],int &m)
{
	m=0;
	for(int i=0;i<n;i++)
		if(a[i]>0)
			b[m++]=a[i];
}
void main()
{
	int n,m,b[MAX];
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	mangb(mang,n,b,m);
	printf("\nMang b chua so duong la:");
	xuatMang(b,m);
	getch();
}