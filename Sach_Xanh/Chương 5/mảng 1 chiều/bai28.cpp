#include<conio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
	printf("Nhap so luong phan tu trong mang vao:");
	scanf("%d",&n);
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
int dem(int a[],int n,int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]==x)
			dem++;
	return dem;
}
void main()
{
	int n,x;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	printf("\nNhap phan tu x vao:");
	scanf("%d",&x);
	int kq=dem(mang,n,x);
	printf("\n%d xuat hien %d lan trong mang",x,kq);
	getch();
}