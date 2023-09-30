#include<stdio.h>
#include<conio.h>
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
int timX(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
		if(a[i]==x)
			return i;
	return -1;
}
void main()
{
	int n,x;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Cac phan tu trong mang la:");
	xuatMang(mang,n);
	printf("\nNhap vao gia tri x=");
	scanf("%d",&x);
	int kq=timX(mang,n,x);
	if(kq==-1)	
	printf("\n%d khong co vi tri trong mang",x);
	else
	printf("\n%d co vi tri %d trong mang",x,kq);	
	getch();
}