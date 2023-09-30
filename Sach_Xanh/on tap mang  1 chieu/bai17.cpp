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
void them(int a[],int &n,int k,int x)
{
	if(k<0||k>n)
		return ;
	for(int i=n;i>k;i--)
		a[i]=a[i-1];
	a[k]=x;
	n++;
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}

void timMax(int a[],int &n,int x)
{
	int m=a[0];
	for(int i=1;i<n;i++)
		if(m<a[i])
		m=a[i];
	for(int i=0;i<n;i++)
		if(a[i]==m)
			them(a,n,i+1,x);	
	}
void main()
{
	int a[MAX],n;
	nhap(a,n);
	int x;
	printf("\nNhap vao phan tu ban muon them vao sau phan tu max trong mang:");
	scanf("%d",&x);
	timMax(a,n,x);
	xuat(a,n);
	getch();
}