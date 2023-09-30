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
void xoaThuK(int a[],int &n,int k)
{
	if(k<0||k>n) return;
	for(int i=k;i<n-1;i++)  //dich chuyen mang
		a[i]=a[i+1];
	n--;  //giam so luong phan tu sau khi xoa
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	int i;
	printf("\nBan muon xoa phan tu vi tri nao:");
	scanf("%d",&i);
	xoaThuK(mang,n,i);
	printf("Mang vua xoa la:");
	xuatMang(mang,n);
	getch();
}