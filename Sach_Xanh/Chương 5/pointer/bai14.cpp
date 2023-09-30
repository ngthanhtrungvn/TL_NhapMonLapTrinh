#include<conio.h>
#include<stdio.h>
#include<math.h>
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
int kTraSNT(int n)
{
	if(n<2)
		return 0;
	else
		for(int i=2;i<=sqrt((float)n);i++)
			if(n%i==0)
				return 0;
	return 1;
}
void xoa(int *a,int &n,int k)
{
	if(k<0||k>=n)
		return ;
	for(int i=k;i<n-1;i++)
	*(a+i)=*(a+i+1);
	n--;
}
void xoaSNT(int *a,int &n)
{
	for(int i=0;i<n;i++)
		if(kTraSNT(*(a+i))==1)
		{
			xoa(a,n,i);
			i--;
		}
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	xoaSNT(a,n);
	printf("\nMang vua xoa tat ca cac so nguyen to la:");
	xuatMang(a,n);
	getch();
}