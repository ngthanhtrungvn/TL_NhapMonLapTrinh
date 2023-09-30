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
void xoa(int a[],int &n,int k)
{
	if(k<0||k>n-1)
		return ;
	for(int i=k;i<n-1;i++)
		a[i]=a[i+1];
	n--;
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
void timMax(int a[],int &n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
		if(min>a[i])
		min=a[i];
	for(int i=0;i<n;i++)
		if(a[i]==min)
			xoa(a,n,i-1);	
	}
void main()
{
	int a[MAX],n;
	nhap(a,n);
	timMax(a,n);
	xuat(a,n);
	getch();
}