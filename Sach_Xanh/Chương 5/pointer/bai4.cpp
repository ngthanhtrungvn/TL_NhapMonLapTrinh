#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int *a,int &n)
{
	do
	{
		printf("Nhap so luong phan tu vao:");
		scanf("%d",&n);
	} while (n<=0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",(a+i));
	}
}
void xuatMang(int *a,int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",*(a+i));
}
void xuaVTLe(int *a,int n)
{
	for(int i=1;i<n;i=i+2)
		printf("%5d",*(a+i));
}
void xuaVTChan(int *a,int n)
{
	for(int i=0;i<n;i=i+2)
		printf("%5d",*(a+i));
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	printf("\nCac phan tu o vi tri le la:");
	xuaVTLe(a,n);
	printf("\nCac phan tu o vi tri chan la:");
	xuaVTChan(a,n);
	getch();
}