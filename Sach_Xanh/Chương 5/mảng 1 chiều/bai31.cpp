#include<conio.h>
#include<stdio.h>
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
void dem(int a[],int n,int b[])
{
	int i;
	for(i=0;i<n;i++)
		for(int j=i;j<n;j++)
			if(a[i]==a[j])
				b[i]++;
}
void soLanXuatHienNN(int a[],int n,int b[])
{
	int max=1;
	for( int i=0;i<n;i++)
		if(max<b[i])
			max=b[i];
	for(int i=0;i<n;i++)
		if(b[i]==max)
			printf("\nPhan tu %d,xuat hien %d lan",a[i],b[i]);
		}
void main()
{
	int n,mang[MAX];
	int b[MAX]={};
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);
	dem(mang,n,b);
	soLanXuatHienNN(mang,n,b);
	getch();
}