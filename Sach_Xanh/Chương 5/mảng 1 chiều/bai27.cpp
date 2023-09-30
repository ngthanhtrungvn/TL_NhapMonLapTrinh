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
int kiemTraSNT(int n)
{
	for(int i=2;i<=sqrt((float)n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int dem(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(kiemTraSNT(a[i])==1&&a[i]!=1)
			dem++;
	return dem;
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	int kq=dem(mang,n);
	printf("\nCo %d so nguyen to trong mang",kq);
	getch();
}