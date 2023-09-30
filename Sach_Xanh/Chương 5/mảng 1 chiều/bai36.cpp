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
void sapXep(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
	if(a[i]<0&&a[j]>0||a[i]==0&&a[j]>0||a[i]>0&&a[j]>0&&a[i]>a[j]||a[i]==0&&a[j]<0||a[i]<0&&a[j]<0&&a[i]<a[j])
				swap(a[i],a[j]);
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	sapXep(mang,n);
	printf("\nMang vua sap xep lai la:");
	xuatMang(mang,n);
	getch();
}