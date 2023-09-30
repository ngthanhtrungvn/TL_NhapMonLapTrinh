#include<conio.h>
#include<stdio.h>
#include<math.h>
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
int kiemTraSNT(int n)
{
	if(n<2)
		return 0;else
	for(int i=2;i<=sqrt((float)n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

void  xoa(int a[],int &n,int k)
{
		for(int j=k;j<n-1;j++)
		a[j]=a[j+1];
	n--;
}
void xoaSNT(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		if(kiemTraSNT(a[i])==1)
		{
			xoa(a,n,i);
			i--;
		}
	}
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	xoaSNT(mang,n);
	printf("\nMang vua xoa la:");
	xuatMang(mang,n);
	getch();
}