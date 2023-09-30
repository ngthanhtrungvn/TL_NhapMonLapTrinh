#include<conio.h>
#include<stdio.h>
#include<math.h>
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
int ktra(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt((float)n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int timMaxChan(int a[],int n)
{
	int vt=-1;
	for(int i=0;i<n;i++)
		if(ktra(a[i])==1)
	{vt=i;break;}
	if(vt==-1)
		return -1;
	int vtmax=vt;
	for(int i=vt+1;i<n;i++)
		if(ktra(a[i])==1&&a[vtmax]>a[i])
			vtmax=i;
	return a[vtmax];
}

void main()
{
	int a[MAX],n;
	nhap(a,n);
	xuat(a,n);
	if(timMaxChan(a,n)==-1)
		printf("Khogn co so nguyen to trong mang");
	else
		printf("so nguye to nho nhat trong mang %d",timMaxChan(a,n));
	getch();
}