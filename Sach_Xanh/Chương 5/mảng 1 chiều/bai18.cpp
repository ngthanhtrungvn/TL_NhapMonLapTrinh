#include<conio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
int kiemTraSNT(int n)
{
	for(int i=2;i<=sqrt((float)(n));i++)
		if((n)%i==0)
	return 0;
	return 1;
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
		if(kiemTraSNT(a[i])==1&&(a[i]>200))
			{
					printf("Nhap lai!\n");
				--i;				
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
			if(kiemTraSNT(abs(a[i]))==0)
			{
				for(int j=0;j<i;j++)
				if(a[i]>a[j]||a[i]==a[j])
				{
					printf("Nhap lai!\n");
					--i;break;
				}
			}
			else
			{
				if(abs(a[i])!=1&&a[i]!=0)
				{
				printf("Nhap lai!\n");
				--i;}
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
	int n,chon;
	int mang[MAX];
	do
	{
		printf("\n1.Nhap ham khong chua so nguyen to lon hon 200");
		printf("\n2.Nhap ham cac phan tu khong nguyen to co thu tu giam");
		printf("\n0.Thoat");
		printf("\nBan chon chuc nang nao:");
		scanf("%d",&chon);
		switch (chon)
		{
		case 1:
			{
				nhapMang(mang,n);
				printf("Cac phan tu trong mang la:");
				xuatMang(mang,n);
			}break;
			case 2:
			{
				nhapMang1(mang,n);
				printf("Cac phan tu trong mang la:");
				xuatMang(mang,n);
			}break;
			case 0:printf("Thoat chuong trinh");break;
		default:printf("Vui long nhap lai!");
			}
	}
	while(chon!=0);
	
	getch();
}
