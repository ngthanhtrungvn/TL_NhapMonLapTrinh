#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int dem(int a[],int n,int x)
{
	 int dem=0;
	for(int i=0;i<n;i++)
		if(x==0&&a[i]==x)
			dem++;
	return dem;
}
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
		for (int j = 0; j <i; j++)
		{
			if(abs(a[i]-a[j])>4)
			{
				printf("Nhap lai!");
				--i;break;
			}
		}
	}
}
void nhapMang1(int a[],int &n)
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
		if(a[i]<0)
		{
			printf("Nhap lai!\n");
			--i;
		}
	}
}
void nhapMang2(int a[],int &n)
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
		if(dem(a,n,a[i])>3)
		{
			printf("Nhap lai!\n");
			--i;
		}
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
void main()
{
	int mang[MAX];
	int n,chon;
	do
	{
	printf("\n1.Nhap mang sao cho cac phan tu khong phai la so am");
	printf("\n2.Nhap mang sao cho co nhieu nhat 3 phan tu 0");
	printf("\n3.Nhap mang sao cho khoang cach giua 2 phan tu bat ky khong qua 4\n");
	printf("0.Thoat\n");
	printf("Ban chon chuc nang nhap mang nao:");
	scanf("%d",&chon);
	switch (chon)
	{
	case 0:printf("Thoat chuong trinh");break;
	case 1:
		{
			nhapMang1(mang,n);
			printf("Cac phan tu trong mang la:");
			xuatMang(mang,n);
		}break;
	case 2:
		{
			nhapMang2(mang,n);
			printf("Cac phan tu trong mang la:");
			xuatMang(mang,n);
		}break;
	case 3:
		{
			nhapMang(mang,n);
			printf("Cac phan tu trong mang la:");
			xuatMang(mang,n);
		}break;
	default:printf("Vui long nhap lai!");	
	}
	}while(chon!=0);
	getch();
}