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
void swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
int dem(int a[],int n,int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]==x)
			dem++;
	return dem;
}
void sapXep1(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
	if((a[i]%2==0&&a[j]%2==0&&a[i]>a[j]))
				swap(a[i],a[j]);
}
void sapXep2(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]%2==0&&a[j]%2==0)
			if(dem(a,n,a[i])>dem(a,n,a[j])||dem(a,n,a[i])==dem(a,n,a[j])&&a[i]>a[j])
			swap(a[i],a[j]);
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	sapXep1(mang,n);
	printf("\nMang vua sap xep lai theo gia tri chan la:");
	xuatMang(mang,n);
	sapXep2(mang,n);
	printf("\nMang vua sap xep lai theo so lan xuat hien la:");
	xuatMang(mang,n);
	getch();
}