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
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
int kiemTraCSC(int a[],int n)
{
	int d=a[1]-a[0];
	for(int i=1;i<n;i++)
		if(a[i]!=a[i-1]+d)
			return -1;
	return 1;
}
void main()
{
	int a[MAX],n;
	nhap(a,n);
	xuat(a,n);
	if(kiemTraCSC(a,n)==1)
		printf("\nCap so cong");
	else
		printf("\nkhong la cap so cong");
	getch();
}