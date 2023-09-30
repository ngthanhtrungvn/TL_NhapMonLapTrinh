#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhap(int a[],int &n);
void xuatVT(int a[],int n);
void main()
{
	int a[MAX],n;
	nhap(a,n);
	xuatVT(a,n);
	getch();
}
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
void xuatVT(int a[],int n)
{
	printf("\nXuat vi tri chan");
	for(int i=0;i<n;i=i+2)
		printf("%5d",a[i]);
	printf("\nXuat vi tri le");
	for(int i=1;i<n;i=i+2)
		printf("%5d",a[i]);
}