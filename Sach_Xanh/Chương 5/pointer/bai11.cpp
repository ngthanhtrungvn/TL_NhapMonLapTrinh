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
int dem(int *a,int n,int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(*(a+i)==x)
			dem++;
	return dem;
}
void main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	printf("\nCac phan tu trong mang la:");
	xuatMang(a,n);
	int x;
	printf("\nNhap vao phan tu ban muon dem so lan xuat hien:");
	scanf("%d",&x);
	printf("Phan tu %d xuat hien %d lan trong mang",x,dem(a,n,x));
	getch();
}